#include<stdio.h>
int nthFibonacci(int n){
    // Base case: if n is 0 or 1, return n
    if (n == 1)
        return 0;
    if( n==2)
		return 1;
    // Recursive case: sum of the two preceding Fibonacci numbers
    return nthFibonacci(n - 1) + nthFibonacci(n - 2);
}

int main(){
    int n;
	printf("Enter n: ");
	scanf("%d", &n);
    int result = nthFibonacci(n);
    printf("%d\n", result);
    return 0;
}
