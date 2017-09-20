#include "sorts.h"

/*
* Insertion sort
* Makes changes on reference
*
* Complexity = O(n^2)
*
* Inputs:
*   Integer Array to sort
*   length of the array
* Output:
*   None
*/

void insertion(int* A, int len){
    int tmp, i, j;
    for(i = 1; i < len; i++){
        tmp = A[i];
        j = i-1;
        while((j >= 0) && (A[j] > tmp)){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = tmp;
    }
}
