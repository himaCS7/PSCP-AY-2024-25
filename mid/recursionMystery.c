#include <stdio.h>
void recursionMystery(int n)
{
	if(n <= 1){
		printf(": ");
	}
	else{
		printf("%d ", n%2);
		recursionMystery(n/2);
		printf("%d ", n);
	}
}	
int main() {
	recursionMystery(25);
}
