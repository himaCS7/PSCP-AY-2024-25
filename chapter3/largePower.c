#include<stdio.h>
float power(float,int);
int main()
{
	int n;
	float x;
	printf("enter x and n to find x^n:");
	scanf("%f %d",&x,&n);
	printf("%.2f^%d = %.2f", x,n,power(x,n));
	return 0;
}

float power(float x,int n)
{
	float p=1;
	for(int i=1; i<=n; i++)
		p = p*x;
	return p;
}
	


