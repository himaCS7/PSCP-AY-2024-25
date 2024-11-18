// C program to illustrate Pointers
#include <stdio.h>

int main()
{
//integer pointer, sizeof(int) =4
    int var = 10;
    int* p;
    p = &var;
    printf(" p = %p \n", p);
	p++;
    printf(" p++= %p \n", p);
	
// char pointers, sizeof(char) = 1
	char c;
	char *cp = &c;
    printf(" cp = %p \n", cp);
	cp++;
    printf(" cp++= %p \n", cp);
	
    // assign the address of a variable to a pointer
    printf(" p = %p \n", p);
    printf(" p+1= %p \n", p+1); //p+1*4 as sizeof(int)=4
    printf(" p+3 = %p \n", p+3);//p+3*4
    printf(" p-2 = %p \n", p-2);//p-2*4
    return 0;
}

