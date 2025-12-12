#include<stdlib.h> 
#include<stdio.h> 

void merge(int deck[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 

	int L[n1], R[n2]; 

	for (i = 0; i < n1; i++) 
		L[i] = deck[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = deck[m + 1+ j]; 

	i = 0; 
	j = 0;
	k = l;
	while (i < n1 && j < n2) 
	{ 
		if (L[i] <= R[j]) 
		{ 
			deck[k] = L[i]; 
			i++; 
		} 
		else
		{ 
			deck[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 
	while (i < n1) 
	{ 
		deck[k] = L[i]; 
		i++; 
		k++; 
	} 

	while (j < n2) 
	{ 
		deck[k] = R[j]; 
		j++; 
		k++; 
	} 
} 
void mergeSort(int deck[], int l, int r) 
{ 
	if (l < r) 
	{ 
		int m = l+(r-l)/2; 

		mergeSort(deck, l, m); 
		mergeSort(deck, m+1, r); 
		merge(deck, l, m, r); 
	} 
} 
void printdeckay(int A[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d ", A[i]); 
	printf("\n"); 
} 
int main() 
{ 
	int deck[] = {12, 11, 13, 5, 6, 7}; 
	int deck_size = sizeof(deck)/sizeof(deck[0]); 

	printf("Given deckay is \n"); 
	printdeckay(deck, deck_size); 

	mergeSort(deck, 0, deck_size - 1); 

	printf("\nSorted deckay is \n"); 
	printdeckay(deck, deck_size); 
	return 0; 
} 

