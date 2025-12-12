#include <stdio.h> 
#include <time.h> 
#include <stdlib.h>
#include <math.h>
int main()
{
    int s1, s2, sonuc, cevap,dsayisi=0,ysayisi=0;
    Random rnd = new Random();
 
    for(int i=1;i<=10;i++)
    {
    	srand(time(NULL));
    	n=rand()%21+10;
        sonuc = s1 * s2;
        printf(s1 + "x" + s2 + "= ");
    	cevap = Convert.ToInt32(Console.ReadLine());
        if(cevap==sonuc)
        {
            Console.WriteLine("Cevap Doðru");
            dsayisi++;
        }
        else
        {
                printf("Cevap Yanlýþ");
                ysayisi++;
        }
	}
} 
