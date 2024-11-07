#include <stdio.h>
/* printd: print n in decimal using recursion */
void printd(int n)
{
	if (n < 0) {
		putchar('-'); //print the sign as -
		n = -n; //convert n to positive
	}
	if (n / 10) //there are multiple digits in n
		printd(n / 10);
	putchar(n % 10 + '0'); //print the least significant digit of n
}

int main()
{
	int n;
	printf("enter an int : ");
	scanf("%d", &n);
	printf("\n printing n using recursion : ");
	printd(n);
	printf("\n");
	return 0;
}
