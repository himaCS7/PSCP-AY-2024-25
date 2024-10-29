#include <stdio.h>
int main() 
{
	int n, digit, rev, m;
in:	printf("enter non negative int to check for palindrome property :");
	scanf("%d", &n);
	if(n < 0){
		printf(" invalid input, try again...\n");
		goto in;
	}
	// check for palindrome
	m = n; //save n in m to check with the reversed n
	rev = 0;
	while (n)
	{
		digit = n%10;
		rev = rev*10+digit;
		n = n/10;
	}
	if (m == rev)
		printf("%d is palindrome\n", m);
	else
		printf("%d is not a palindrome\n",m);
	return 0;
}		
