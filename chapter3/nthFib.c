#include<stdio.h>
int nthFibonacci(int n){
	int f1=0, f2=1, f;
	for(int i=1; i<=(n-2); i++)
	{
		f = f1+f2;
		f1=f2;
		f2=f;
	}
	return f;
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int result = nthFibonacci(n);
    printf("%d\n", result);
    return 0;
}
