#include "stdio.h"

void heap_increase_key(int*, int, int);

void max_heap_insert(int *A, int key, int length){
    length++;
    A[length] = -99999;
    heap_increase_key(A,length,key);
}

void heap_increase_key(int *A,int i,int key){
    int parent = (i-1)/2,
        tmp;
        
    if(A[i]<key){
        A[i] = key;
        while((i>0) && (A[parent]<A[i])){
            tmp = A[i];
            A[i] = A[parent];
            A[parent] = tmp;
            i = parent;
            parent = (i-1)/2;
        }
    }

}

int main(){
    int i;
    int A[11] = {16,14,10,8,7,9,3,2,4,1,0};
    //heap_increase_key(A,8,15);
    max_heap_insert(A,15,9);
    for (i = 0; i < 11 ; i += 1)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
