#include<stdio.h>
long unsigned int fact(long unsigned int);
int main()
{
	long unsigned int n=200;
	printf(" %lu! = %lu\n", n, fact(n));
}
long unsigned int fact(long unsigned int n)
{
	if(n==0) 
		return 1;
	else
		return n*fact(n-1);
}
