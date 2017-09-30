#include "sorts.h"

/*
* Quick sort
* Makes changes on reference
*
* Complexity = O(nlogn) (Average Case)
*            = O(n^2) (Worst Case)
*
* Inputs:
*   Integer Array to sort
*   First
*   End
* Output:
*   None
*/

void quicksort(int *, int, int);
int partition(int *, int, int);


void quicksort(int *A, int p, int r){
    int q;
    if(p<r){
        q = partition(A, p, r);
        quicksort(A, p, q-1);
        quicksort(A, q+1, r);
    }
}

int partition(int *A, int p, int r){
    int j,tmp,
        x = A[r],
        i = p-1;

    for(j = p; j < r; j++){
        if(A[j] <= x){
            i++;
            tmp = A[i];
            A[i] = A[j];
            A[j] = tmp;
        }
    }
    
    tmp = A[i+1];
    A[i+1] = A[r];
    A[r] = tmp;
    
    return i+1;
}
