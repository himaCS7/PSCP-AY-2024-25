// Binary Search, recursive logic

#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
  if (low<=high) {
    int mid = low + (high - low) / 2;

    // If found at mid, then return it
    if (x == array[mid])
      return mid;

    // Search the right half
    if (x > array[mid])
      return binarySearch(array, x, mid + 1, high);

    // Search the left half
    return binarySearch(array, x, low, mid - 1);
  }

  return -1;
}

int main(void) {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(array) / sizeof(array[0]);
  int x = 7;
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
}
