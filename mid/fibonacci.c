// The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, output numbers that are even and greater than 2.....
#include <stdio.h>
int main()
{

	int n;
	int flag = 0; // no terms >2 and even 

  // initialize first and second terms
	int t1 = 0, t2 = 1;

  // initialize the next term (3rd term)
	int nextTerm = t1 + t2;

  // get no. of terms from user
	printf("Enter the number of terms, n: ");
	scanf("%d", &n);
/*  if(n <= 6)
	printf("there are no fib terms even and greater than 2 in the first %d terms\n", n);
  else
*/
  // print even fib terms greater than 2
	while (nextTerm <= n) {
		if(nextTerm>2 && nextTerm%2 == 0){
			printf("%d ", nextTerm);
			flag = 1;
		}
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	if(flag == 0)
		printf("there are no fib terms even and greater than 2 below %d\n", n);
	return 0;
}
