#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
int partition (int deck[], int low, int high) 
{ 
    int pivot = deck[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
	int j;
    for ( j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than or 
        // equal to pivot 
        if (deck[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&deck[i], &deck[j]); 
        } 
    } 
    swap(&deck[i + 1], &deck[high]); 
    return (i + 1); 
} 
  
/* The main function that implements QuickSort 
 deck[] --> deckay to be sorted, 
  low  --> Starting index, 
  high  --> Ending index */
void quickSort(int deck[], int low, int high) 
{ 
    if (low < high) 
    { 
        /* pi is partitioning index, deck[p] is now 
           at right place */
        int pi = partition(deck, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(deck, low, pi - 1); 
        quickSort(deck, pi + 1, high); 
    } 
} 
  
/* Function to print an deckay */
void printdeckay(int deck[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
    {
    	printf("%d ", deck[i]); 
	}
} 
  
int main() 
{ 
    int deck[] = {10, 7, 8, 9, 1, 5}; 
    int n = sizeof(deck)/sizeof(deck[0]); 
    
    quickSort(deck, 0, n-1); 
    printf("Sorted deckay: "); 
    printdeckay(deck, n); 
    return 0; 
} 
