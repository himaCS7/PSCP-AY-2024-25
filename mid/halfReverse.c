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
	printf("mid = %d\n",mid);
	if(n%2 == 0) //even number of elements
		for(i=0, j=mid; i<mid; i++, j++)
			swap(&a[i], &a[j]);
	else  // odd number of elements
		for(i=0, j=mid+1; i<mid; i++, j++)
			swap(&a[i], &a[j]);
	
}

int main() {
    int a[]={1, 2, 3, 4, 5, 6, 7, 8}, n = 8;  
    //int a[]={1, 2, 3, 4, 5, 6, 7, 8, 9}, n = 9;  
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
