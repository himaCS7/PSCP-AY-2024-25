/* Selection sort 
selects the smallest element from an unsorted list in each iteration and places that element at the beginning of the unsorted list.*/
#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// perform the selection sort
void selectionSort(int a[], int n) {
  // loop to access each array element
  for (int pass = 0; pass < n - 1; ++pass) { 
    int min_idx = pass;
    for (int i = pass + 1; i < n; i++) {
      // Select the minimum element in the unsorted list and store it's index
      if (a[i] < a[min_idx])
        min_idx = i;
    }
    // put min at the correct position
    swap(&a[min_idx], &a[pass]);
  }
}

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
  selectionSort(data, n);
  printf("Sorted Array in Ascending Order:\n");
  printArray(data, n);
}

