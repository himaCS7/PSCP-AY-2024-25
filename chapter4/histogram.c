#include<stdio.h>
//to find histogram of marks from 0 to 10, by counting how many times each element appears in the list of values
int main()
{
//	int max;
	int counts[11] = {0}; //initialize counts to all 0s
//	printf("enter the highest mark to find the histogram, 0 is the lowest:");
//	scanf("%d",&max);
	int v;	
	printf("enter the mark, range [0,10], use Ctrl+D to stop: ");
	while(scanf("%d",&v) != EOF) // read until Ctlr+D is pressed by user
	{
		counts[v]++;
		printf("enter the mark, range [0,10]: ");
	}
	putchar('\n');
	for(int i=0; i<=10;i++)
		printf("[%d]:%d\t", i, counts[i]);

	return 0;
}
	


