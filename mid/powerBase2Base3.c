// To compute power with fewer multiplications
#include<stdio.h>
#include<math.h>
double large_power2(int,int); // as discussed in R.G. Dromey
double large_power3(int,int);
int main()
{
	int n;
	int x;
	printf("enter x and n to find x^n:");
	scanf("%d %d",&x,&n);
	printf("%d^%d with base2 = %.2f\n", x,n,large_power2(x,n));
	printf("%d^%d with base3 = %.2f\n", x,n,large_power3(x,n));
	printf("%d^%d with pow = %.2f\n", x,n,pow(x,n));
	return 0;
}

double large_power3(int x,int n)
{
	double p=1, q=x;
	while(n>0)
	{
		if(n%3 == 2)
			p = p*q*q; //p*(q)^2
		else if (n%3 == 1)
		    p = p*q; 
		n = n/3;
		q = q*q*q; //(q)^3 for base 3
	}
	return p;
}

//base 2 logic already discussed earlier
double large_power2(int x,int n)
{
	double p=1, q=x;
	while(n>0)
	{
		if(n%2 == 1)
			p = p*q;
		n = n/2;
		q = q*q; // square for base 2
	}
	return p;
}
