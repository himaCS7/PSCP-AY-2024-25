// Bubble sort: compare adjacent elements, swap if out of order
//Just like the movement of air bubbles in the water that rise up to the surface, largest element of the unsorted array move to the end of the array in each iteration

#include <stdio.h>

// perform the bubble sort
void bubbleSort(int a[], int n) {
  // loop to access each array element
  for (int pass = 0; pass < n - 1; ++pass) { 
    // loop to compare array elements
    for (int i = 0; i < n - pass - 1; ++i) {
      // compare two adjacent elements, change > to < to sort in descending order
      if (a[i] > a[i + 1]) {
        // swap as the elements are not in the intended order
        int temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
      }
    }
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
