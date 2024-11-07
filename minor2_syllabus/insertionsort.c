// Insertion sort: places an unsorted element at its suitable place in the sorted list in each iteration.
// initially the first element is the sorted list, gradually the sorted list size increases

#include <stdio.h>

// perform the insertion sort
void insertionSort(int a[], int n){
// from 2nd element onwards, insert in the sorted list
  for (int pass = 1; pass < n ; ++pass) { 
		int key = a[pass];
    	int j = pass - 1;
    // Compare key with each element on the left of it until an element smaller than it is found.
    	while (j >=0 && key < a[j]) {
      		a[j + 1] = a[j]; //move large element to create place for the small element
      		--j;
    	}
    	a[j + 1] = key; //store key in its correct postion of the sorted list
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
  insertionSort(data, n);
  printf("Sorted Array in Ascending Order:\n");
  printArray(data, n);
}
