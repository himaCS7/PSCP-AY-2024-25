// C program to illustrate Pointers
#include <stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5};
    // declare pointer variable
	int *ptr; 
	ptr = arr;
	//ptr is at arr[0]
	for(int i=0; i<5; i++)
    	printf(" ptr+%d = %p, *ptr = %d %d %d\n",i, ptr+i, *(ptr+i), i[arr],arr[i]);//ptr is not changed

	//ptr is at arr[0]
	for(int i=0; i<5; i++) //ptr is being changed
    	printf(" ptr = %p, *ptr = %d \n", ptr, *ptr++);//++ willbe executed first due to right to left associativity, but the increment happens after printing due to postfix
    return 0;
}

