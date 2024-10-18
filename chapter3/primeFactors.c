#include<stdio.h>
/*45 				36             125
45/3 = 15			36/2 = 18      125/5=25
15/3 = 5			18/2 = 9        25/5=5
5					9/3 =3           5/5=1
					3/3 = 1
*/
int main()
{
	int n;
	printf("enter n to find its prime factors: ");
	scanf("%d",&n);
	for(int i=2; i<=n; i++)  // n is updated from the while loop
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
	return 0;
}
