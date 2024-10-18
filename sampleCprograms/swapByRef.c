// C program to illustrate call by reference
#include <stdio.h>
void swap(int* , int* );
int main()
{
    int a = 10, b = 20;
    // Pass by Reference 
    printf("Inside main addresses\n &a = %p &b = %p\n", &a, &b);
    swap(&a, &b); // addresses of Parameters
    printf("In the main, values:\na = %d b = %d\n", a, b);
    return 0;
}
// Swap functions that swaps
void swap(int *x, int *y) // pointers to the parameter
{
    int t;
    printf("Inside Function address\n x = %p y = %p\n", x, y);
    printf("Inside Function initially:\n x = %d y = %d\n", *x, *y);
    t = *x;
    *x = *y;
    *y = t;
    printf("Inside Function after swapping:\n x = %d y = %d\n", *x, *y);
}
