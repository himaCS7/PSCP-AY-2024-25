#include<stdio.h>
// to delete duplicates from an ordered array (elements are in non-decreasing order)
int main()
{
	int n, i, j;
	int a[100];
	printf("enter n:");
	scanf("%d",&n);
	printf("enter %d elements in non-decreasing order\n",n);
	for( i=0; i<n; i++)
		scanf("%d", &a[i]);
	for(i=1, j=1; j < n; j++) // j++ is taken care by the for loop
	{
		if(a[j] == a[j-1]) // when the elements are same, go with next j with i staying at the same index so that it can be overwritten later with the next non-duplicate element seen for the first time
			continue;
		else 
		{
			a[i]=a[j]; // updated ith element with jth element, increment both i and j
			i++;
		}
	}
	n=i; //update n to i, without duplicate elements

	printf("array of %d elements after removing duplicates:\n", n);
	for( i=0; i<n; i++)
		printf("%d ",a[i]);
	return 0;
}
	


