//Instead of measuring actual time required in executing each statement in the code, Time Complexity considers how many times each statement executes.
// refer to https://www.geeksforgeeks.org/understanding-time-complexity-simple-examples/
#include <stdio.h>
#include <math.h>

void printOnce() // constant time :O(1) 
{
    printf("Hello World\n");
}

void printTwice() // constant time :O(1) 
{
    printf("Hello World\n");
    printf("Hello World\n");
}

void print_n_times(int n) // linear time :O(n) 
{
	int i;
	for(i=0; i<n; i++)
    	printf("%d: Hello World\n", i+1);
}

void print_nSq_times(int n) // quadratic time :O(n^2) 
{
	int i,j;
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
    		printf("%d %d: Hello World\n", i+1, j+1);
}

void print_logn_times(int n) // log time :O(log n) 
{
	int i;
	for(i=2; i<=n; i = i*2)
    	printf("i = %d: Hello World\n", i);
}

void print_loglogn_times(int n) // log log time :O(log log n) 
{
	int i;
	for(i=2; i<=n; i = (int)pow(i,2))
    	printf("i = %d: Hello World\n", i);
}

int main()
{
	int n;
	printf("enter n, choose a number which is a power of 2: ");
	scanf("%d",&n);
	printOnce();
	putchar('\n');
	print_n_times(n);
	putchar('\n');
	print_nSq_times(n);
	putchar('\n');
	print_logn_times(n);
	putchar('\n');
	print_loglogn_times(n);
	return 0;
}
