#include<stdio.h>
float large_power(float,int);
int main()
{
	int n;
	float x;
	printf("enter x and n to find x^n:");
	scanf("%f %d",&x,&n);
	printf("%.2f^%d = %.2f", x,n,large_power(x,n));
	return 0;
}

float large_power(float x,int n)
{
	float p=1, psq=x;
	while(n>0)
	{
		if(n%2 == 1)
			p = p*psq;
		n = n/2;
		psq = psq*psq;
	}
	return p;
}
	


