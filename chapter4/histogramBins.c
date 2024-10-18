#include<stdio.h>
//to find histogram of marks from 0 to 100 with bin size of 10, by counting how many times  elements of bin appear in the list of values, bins are [0-10], [11-20], ...[91-100]
int main()
{
	int counts[10] = {0}; //initialize counts to all 0s
	int v;	
	printf("enter the mark, range [0,100], use Ctrl+D to stop: ");
	while(scanf("%d",&v) != EOF) // read until Ctlr+D is pressed by user
	{
		if(v%10 == 0) // to handle 10,20,...100
			counts[v/10-1]++; //v/10-1 is the same as (v/10)-1 as / has higher precedence over -1
		else // to handle non-multiples of 10, 22 comes in bin[21-30] 
			counts[v/10]++;
		printf("enter the mark, range [0,100]: ");
	}
	putchar('\n');
	for(int i=0; i<10;i++)
		printf("bin[%d]:%d\n", i+1, counts[i]);

	return 0;
}
	


