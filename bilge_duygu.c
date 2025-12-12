#include<stdio.h>
#include<semaphore.h>
#include<pthread.h>
#include <unistd.h>

#define TRUE 1
#define max_patient 10
sem_t patients;
sem_t psychologistt;
sem_t chair;
int waiting = 0;

void *psychologist()
{
	while(TRUE)
	{
		sem_wait(&patients);
		sem_wait(&chair);
		waiting = waiting - 1;
		sem_post(&psychologistt);
		sem_post(&chair);
		printf("Psychologist is dealing with the %d. patient.\n",waiting);
		sleep(3);
	}
}

void *patient()
{
	while(TRUE)
	{
		sem_wait(&chair);

		if(waiting == 0)
		{
			printf("Psychologist is sleeping\n");
			sleep(1);
		}
		if(waiting < max_patient)
		{
			//printf("waiting = %d\n", waiting);
			waiting = waiting + 1;

			sem_post(&patients);
			sem_post(&chair);
			sem_wait(&psychologistt);
			sleep(2);
			printf("%d patient is meeting with psychiatrist\n",waiting);
		}
		else
		{
			sem_post(&chair);
		}
	}
}

int main()
{
	sem_init(&patients, 0, 0);
	sem_init(&psychologistt, 0, 0);
	sem_init(&chair, 0, 1);

    int i;
    pthread_t thr[max_patient]; 
    pthread_t psy;
    pthread_create(&psy, NULL, psychologist, NULL);

    for (i = 0; i < max_patient; i++) 
    {
    	pthread_create(&thr[i], NULL, patient, NULL);
    }
 
    for (i = 0; i < max_patient; i++)
    {
        pthread_join(thr[i], NULL);
    }
    pthread_join(psy, NULL);
}