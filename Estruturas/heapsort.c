#include <stdio.h>
#include "heap.h"
#define LENGTH 10

int heapSize;

void Heapify(int* A, int i)
{
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int maior;

    if(l <= heapSize && A[l] > A[i])
        maior = l;
    
    else maior = i;
    
    if(r <= heapSize && A[r] > A[maior])
        maior = r;
    
    if(maior != i)
    {
        int temp = A[i];
        A[i] = A[maior];
        A[maior] = temp;
        Heapify(A, maior);
    }
}

void BuildHeap(int* A)
{
    heapSize = LENGTH - 1;
    int i;
    for(i = (LENGTH - 1) / 2; i >= 0; i--)
    Heapify(A, i);
}

void HeapSort(int* A)
{
    BuildHeap(A);
    
    int i;
    for(i = LENGTH - 1; i > 0; i--)
    {
        int temp = A[heapSize];
        A[heapSize] = A[0];
        A[0] = temp;
        heapSize--;
        Heapify(A, 0);
    }
}