// Bubble sort, optimized for better time complexity: avoids comparisons if the array is already sorted
/*we introduce an extra variable swapped. The value of swapped is set true if swapping of elements happen. Otherwise, it is set false.
After an iteration, if there is no swapping, the value of swapped will be false. This means elements are already sorted and there is no need to perform further iterations.
This will reduce the execution time and helps to optimize the bubble sort.*/
#include <stdio.h>

// perform the bubble sort
void bubbleSort(int a[], int n) {
  // loop to access each array element
  for (int pass = 0; pass < n - 1; ++pass) { 
    // check if swapping occurs  
    int swapped = 0;
    // loop to compare array elements
    for (int i = 0; i < n - pass - 1; ++i) {
      // compare two adjacent elements 
      if (a[i] > a[i + 1]) {
        // swapp, if elements are not in the intended order
        int temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
		swapped = 1; //set swapped = true, as we have swapped just now
      }
    }
    // no swapping means the array is already sorted, so no need for further comparisons!
    if (swapped == 0) 
      break; //we are in the outer loop now, so it will be stopped
  }
}

// print array
void printArray(int a[], int n) {
  for (int i = 0; i < n; ++i) 
    printf("%d  ", a[i]);
  printf("\n");
}

int main() {
  int data[] = {-2, 45, 0, 11, -9};
  // find the array's length
  int n = sizeof(data) / sizeof(data[0]);
  printf(" Array elements before sorting:\n");
  printArray(data, n);
  bubbleSort(data, n);
  printf("Sorted Array in Ascending Order:\n");
  printArray(data, n);
}
