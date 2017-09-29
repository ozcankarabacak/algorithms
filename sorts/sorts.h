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
void insertion(int* Array, int length);

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
void merge(int* Array, int indexLeft, int indexRight);

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
void heapsort(int* Array, int length);
