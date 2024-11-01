#include<stdio.h>
// to delete elements occuring more than once from an ordered array (elements are in non-decreasing order), so that only unique elements are remaining
int uniqueElements(int a[], int n);
int main()
{
	int n, i, j;
	int a[100];
	printf("enter n:");
	scanf("%d",&n);
	printf("enter %d elements in non-decreasing order\n",n);
	for( i=0; i<n; i++)
		scanf("%d", &a[i]);
	n = uniqueElements(a,n);
	printf("array of %d unique elements after removing duplicates:\n", n);
	for( i=0; i<n; i++)
		printf("%d ",a[i]);
	return 0;
}
int uniqueElements(int a[], int n)
{
	int i=0,j=0, cnt=1; // i for storing the unique elements, j to keep track of the number of times the jth element is seen
	while(j < n-1)  //loop upto j=n-2, as a[j+1] is undefined when j=n-1
	{
		if(a[j] == a[j+1]) // next element is same as jth, increment count
			cnt++;
		else if (cnt > 1) // jth element is seen many times, >1; as next element is different, set count=1
			cnt =1;
		else  // the jth element is seen only once, so store it at ith index
		{
			a[i] =  a[j];
			i++;
		} 
		j++; 
	}
	//when j is at the last element, at index n-1
	if(cnt == 1){ // a[j] is seen only once, so store at ith index 
		a[i] = a[j];
		i++;
	}
	n=i; //update n to i, without duplicate elements
	return n;
}
