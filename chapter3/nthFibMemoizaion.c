#include<stdio.h>
int nthFibonacci(int n, int memo[]){
    // Base case: if n is 0 or 1, return n
    if (n == 1)
        return 0;
    if( n==2)
		return 1;
    // Check if the result is already in the memo table
    if (memo[n] != -1)
        return memo[n];
    // Recursive case: calculate Fibonacci number and store it in memo
    memo[n] = nthFibonacci(n - 1, memo) + nthFibonacci(n - 2, memo);
    return memo[n];
}

int main(){
    int n;
	printf("Enter n: ");
	scanf("%d", &n);

    int memo[n + 1];
    for (int i = 0; i <= n; i++) {
        memo[i] = -1;
    }
    int result = nthFibonacci(n,memo);
    printf("%d\n", result);
    return 0;
}
