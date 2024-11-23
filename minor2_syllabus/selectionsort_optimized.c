/* Selection sort: selects the smallest element from an unsorted list in each iteration and places that element at the beginning of the unsorted list.
Optimize: Take the max and min simultaneously, then sort the array
from two ends. This is much faster than normal Selection Sort. It sorts the data in half the
number of iterations as it sorts two data elements at a time. Therefore, it minimizes the sorting
time by up to 50%
*/
#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void printArray(int a[], int n) {
  for (int i = 0; i < n; ++i) 
    printf("%d  ", a[i]);
  printf("\n");
}
// perform the selection sort
void selectionSort(int a[], int n) {
  // loop to access each array element
  for (int pass = 0; pass < n/2; ++pass) { //half iterations are sufficient
    int min_idx = pass;
    int max_idx = n-pass-1;
    for (int i = pass ; i < n-pass; i++) { //i=pass as ith element is compared for both min and max
      // Select the minimum element in the unsorted list and store it's index
      if (a[i] < a[min_idx])
        min_idx = i;
	  if(n-pass-1 > pass+1) //if atleast 3 elements are there 
	      if (a[i] > a[max_idx])
    		max_idx = i;
    }
    // put min at the correct position
    swap(&a[min_idx], &a[pass]);
    swap(&a[max_idx], &a[n-pass-1]);
  }
}


int main() {
  int data[] = {7,-2, 45, 0, 11, -9};
  // find the array's length
  int n = sizeof(data) / sizeof(data[0]);
  printf(" Array elements before sorting:\n");
  printArray(data, n);
  selectionSort(data, n);
  printf("Sorted Array in Ascending Order:\n");
  printArray(data, n);
}

