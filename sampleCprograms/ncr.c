#include<stdio.h>

int factorial(int); //function declaration

int main()
{
	int n=5,r,nCr;
	for(r=0; r<=n;r++)
	{
		nCr = factorial(n)/(factorial(r)*factorial(n-r));
		printf("nCr=%d\t",nCr);
	}
}

//function definition
int factorial(int n)
{
	int fact=1,i;
	for(i=1; i<=n; i++)
		fact *= i;
	return fact;
}
