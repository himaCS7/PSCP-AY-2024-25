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
	for(i=1, j=1; j < n; j++)
	{
		if(a[i] != a[i-1])
			i++;
		if(a[i] != a[j])
			a[i] = a[j];
	}
	// update n so that array size is restricted to consider only the unique elements
	j=j-1; //reset j to the last element index in the original array
	if(a[i] == a[j] && i != j-1) //the last element is same as a[i] and not just only one pair of duplicates at the end; i=j-1 only when the last two elments are the duplicates, ex: [2,2,4,4]
		n=i;
	else
		n=i+1;

	printf("array of %d elements after removing duplicates:\n", n);
	for( i=0; i<n; i++)
		printf("%d ",a[i]);
	return 0;
}
	


