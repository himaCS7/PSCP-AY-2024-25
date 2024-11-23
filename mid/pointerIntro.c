// C program to illustrate Pointers
#include <stdio.h>

int main()
{
    int var = 10;
    int y = 20, arr[] = {1, 2, 3, 4, 5};
    // declare pointer variable
    int *ptr;

    // note that data type of ptr and var must be same
    ptr = &var;

    // assign the address of a variable to a pointer
    printf(" ptr = %p \n", ptr);
    printf(" var = %d \n", var);
    printf(" *ptr = %d \n", *ptr);

    y = *ptr; // y is now 10
    *ptr = 0; // var is now 0
    printf("var=%d, y=%d\n", var, y);
    ptr = arr; // ptr is now at arr[0]
    printf(" ptr = %p \n", ptr);
    printf(" *ptr = %d \n", *ptr);
    ptr++; // ptr is at arr[1]
    printf(" ptr = %p \n", ptr);
    printf(" *ptr = %d \n", *ptr);
    ptr--; // ptr is at arr[0] again
    for (int i = 0; i < 5; i++)
        printf(" ptr = %p, *ptr = %d \n", ptr + i, *(ptr + i));

    for (int i = 0; i < 5; i++, ptr++)
        printf(" ptr = %p, *ptr = %d \n", ptr, *ptr);
    return 0;
}
