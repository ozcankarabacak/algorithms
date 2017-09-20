#include "sorts.h"

/*
* Merge sort
* Makes changes on reference
*
* Complexity = O(n*log(n))
*
* Inputs:
*   Integer Array to sort
*   begining of the array
*   end of the array
* Output:
*   None
*/

void mergeSort(int* A, int l, int m, int r){
    int i = l,
        j = m+1,
        k = 0;

    int sortedArray[r-l+1];
    while((i<=m) && (j<=r)){
        if(A[i] < A[j]){
            sortedArray[k++] = A[i++];
        } else {
            sortedArray[k++] = A[j++];
        }
    }

    int tempIndexStart, tempIndexEnd;
    if(i > m){
        tempIndexStart = j;
        tempIndexEnd = r;
    } else {
        tempIndexStart = i;
        tempIndexEnd = m;
    }

    while(tempIndexStart <= tempIndexEnd){
        sortedArray[k++] = A[tempIndexStart++];
    }
    
    for (i = l, k = 0; i <= r; i++, k++){
        A[i] = sortedArray[k];
    }
}

void merge(int* A, int l, int r){
    if(r > l) {
        int m = (r+l)/2;
        merge(A, m+1, r);
        merge(A, l, m);

        mergeSort(A, l, m, r);
    }
}
