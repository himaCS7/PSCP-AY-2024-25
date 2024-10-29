#include <stdio.h>

void swap(int *x, int*y)
{
	int tmp = *x;
	*x= *y;
	*y =tmp;
}

void halfReverse(int a[ ], int n)
{
	int i,j,mid=n/2;
	for(i=0, j=mid; i<mid; i++, j++)
		swap(&a[i], &a[j]);
}

int main() {
    int a[]={1, 2, 3, 4, 5, 6, 7, 8}, n = 8;  // assume n is even
	int i;
	printf("\narray initially: ");
	for(i=0; i<n; i++)
		printf("%d ", a[i]);
	halfReverse(a, n);
	printf("\narray after the function call: ");
	for(i=0; i<n; i++)
		printf("%d ", a[i]);
	return 0;
}
