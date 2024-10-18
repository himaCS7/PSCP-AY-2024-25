#include<stdio.h>
void reverse1(int[],int);
void reverse2(int[],int);
void swap(int*, int*);
void printArray(int[], int);

int main()
{
	int n;
	int a[100];  //a[n] is not guaranteed to work all times
	printf("enter n:");
	scanf("%d",&n);
	//read the n array elements
	for(int i=0;i<n;i++)
	{
		printf("enter the %d element: ", i+1);
		scanf("%d",&a[i]);
	}
	reverse1(a,n);
	printArray(a,n);
	reverse2(a,n);
	printArray(a,n);
	return 0;
}
		
void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

// use pointers from both ends and swap the corresponding elements
void reverse1(int a[],int n)
{
	int i=0,j=n-1;
	for(; i<j; i++, j--)
		swap(&a[i], &a[j]);
}

// start a pointer from 0, swap the first and last elements, continue till the middle element
void reverse2(int a[],int n)
{
	int i;
	for(i=0; i<n/2; i++)
		swap(&a[i], &a[n-1-i]);
}

void printArray(int *a,int n)
{
	printf("The array after reverse\n");
	
	for(int i=0; i<n; i++)
		printf("%d ", a[i]);
	putchar('\n');
}
