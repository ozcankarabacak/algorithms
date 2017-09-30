#include "sorts.h"

/*
* Heap sort
* Makes changes on reference
*
* Complexity = O(nlogn)
*
* Inputs:
*   Integer Array to sort
*   length of the array
* Output:
*   None
*/

void max_heapify(int*, int, int);
void build_max_heap(int *, int);
void heapsort(int*, int);

void max_heapify(int *A,int i, int length){
    int largest,
        l = (i<<1)+1,
        r = l+1,
        tmp;

    if((l<length) && (A[l]>A[i]))
        largest = l;
    else
        largest = i;

    if((r<length) && (A[r]>A[largest]))
        largest = r;

    if(largest != i){
        tmp = A[i];
        A[i] = A[largest];
        A[largest] = tmp;
        max_heapify(A,largest,length);
    }
}

void build_max_heap(int *A,int length){
    int i;

    for (i = length/2; i>=0; i--){
        max_heapify(A,i,length);
    }
}

void heapsort(int *A, int length){
    int i,tmp;

    build_max_heap(A, length);

    for(i=length-1;i>=1; i--){
        tmp = A[0];
        A[0] = A[i];
        A[i] = tmp;
        length--;
        max_heapify(A,0,length);
    }
}


