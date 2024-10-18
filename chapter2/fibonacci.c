#include <stdio.h>
int main() 
{
	int i, n;

  // initialize first and second terms
  	int t1 = 0, t2 = 1;

  	int nextTerm;

  // get no. of terms from user
  	printf("Enter the number of terms: ");
  	scanf("%d", &n);

  // print the first two terms t1 and t2
  	printf("Fibonacci Series: %d, %d, ", t1, t2);

  // print 3rd to nth terms
  	for (i = 3; i <= n; ++i) 
	{
  		nextTerm = t1 + t2;
    		printf("%d, ", nextTerm);
    		t1 = t2;
    		t2 = nextTerm;
  	}
	printf("\n");
  	return 0;
}
