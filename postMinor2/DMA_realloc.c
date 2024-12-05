// program to illustrate realloc()
/*
Resizing with realloc:
    1.realloc is used to resize the memory block.
    2.If the new size is larger, additional memory is allocated, and the existing data is preserved.
    3. If the new size is smaller, the extra memory is freed.
    4. If realloc() fails, it returns NULL, and the original memory block remains unaffected.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int size; // Initial size of the array
    int newSize, i;

    printf("enter size: ");
    scanf("%d", &size);
    // Allocate memory for the initial array
    arr = (int *)calloc(size, sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Get user input for the initial array
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the initial array
    printf("\nInitial Array with input values:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Ask the user for a new size
    printf("\nEnter new size for the array: ");
    scanf("%d", &newSize);

    // Resize the array using realloc()
    arr = (int *)realloc(arr, newSize * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    // If the new size is larger, initialize the new elements
    if (newSize > size)
    {
        printf("Enter %d more integers:\n", newSize - size);
        for (i = size; i < newSize; i++)
        {
            printf("Element %d: ", i + 1);
            scanf("%d", &arr[i]);
        }
    }

    // Display the updated array
    printf("\nUpdated Array:\n");
    for (i = 0; i < newSize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr);

    return 0;
}
