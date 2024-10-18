#include<stdio.h>
/*45 				36
45/3 = 15			36/2 = 18
15/3 = 5			18/2 = 9
5					9/3 =3
					3/3 = 1
*/
int main()
{
	int n;
	printf("enter n to find its prime factors: ");
	scanf("%d",&n);
//run upto sqrt(n)
	for(int i=2; i*i<=n; i++)  // n is updated from the while loop
	{	
		if(n%i == 0) // i is a factor
		{
			int count=0;
			while(n%i == 0)  // find how many times i is a factor of n
			{
				n=n/i;  // update n as the quotient
				count++;
			}
			printf("%d is a prime factor, %d^%d \n", i,i,count);
		}
	}
	if(n!=1) // updated n is prime
		printf("%d is a prime factor, %d^1 \n", n,n);
	return 0;
}
