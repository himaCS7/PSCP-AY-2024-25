// C program to demonstrate
// addition of complex numbers
#include <stdio.h>

// define a structure for complex number
typedef struct complexNumber
{
    int real;
    int img;
} complex;

// This function accepts two complex numbers
// as parameter and return addition of
// them.
complex add(complex x, complex y);

// Driver code
int main()
{
    // Define three complex type numbers
    complex a, b, sum;

    // First complex number
    a.real = 2;
    a.img = 3;

    // Second complex number
    b.real = 4;
    b.img = 5;

    // Print first complex number
    printf("\n a = %d + %di", a.real, a.img);

    // print second complex number
    printf("\n b = %d + %di", b.real, b.img);

    // call add(a,b) function and
    // pass complex numbers a & b
    // as an parameter.
    sum = add(a, b);

    // Print result
    printf("\n sum = %d + %di", sum.real, sum.img);

    return 0;
}

// Complex add(complex x, complex y)
// function definition
complex add(complex x, complex y)
{
    // Define a new complex number.
    complex add;

    // Add real part of a&b
    add.real = x.real + y.real;

    // Add Imaginary part of a&b
    add.img = x.img + y.img;

    return (add);
}
