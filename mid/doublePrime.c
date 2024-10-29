#include <stdio.h>
#include <math.h>
void doublePrime(int n)
{
	int m=n/2;  // n = 2*m, if m is prime, print yes, otherwise no
	int i,s=(int)sqrt(m);
	printf("\n checking %d if it is double of a prime... : ",n);
	if(n%2 != 0){ // if n is odd, no need to process further!
		printf("no\n");
		return;
	}
	for(i=2; i<=s; i++)
		if(m%i == 0) // i is a factor of m
			break;
	if(i > s)
		printf("yes\n");
	else if(m == 2 || m==3) //for 2 and 3, the loop is not executed as s < 2
		printf("yes\n");
	else
	 printf("no\n");
}
int main() {
	doublePrime(10);
	doublePrime(20);
	doublePrime(25);
	doublePrime(9);
	doublePrime(4);
	doublePrime(6);
	return 0;
}	
