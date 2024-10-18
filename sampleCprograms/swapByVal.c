// C program to illustrate call by value
#include <stdio.h>
// Function Prototype
void swap(int , int );
int main()
{
    int a = 10, b = 20;
    // Pass by Values
    swap(a, b); // Actual Parameters
    printf("In the Caller:\na = %d b = %d\n", a, b);
    return 0;
}
// Swap functions that swaps
void swap(int a, int b) // Formal Parameters
{
    int t;
    printf("Inside Function initially:\n a = %d b = %d\n", a, b);
    t = a;
    a = b;
    b= t;
    printf("Inside Function after swapping:\n a = %d b = %d\n", a, b);
}
