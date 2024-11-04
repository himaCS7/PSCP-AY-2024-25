#include <stdio.h>

// Tower of Hanoi program in C using Recursion
//rodA is the source, rodC is the destination,rodB is for temporary holding
void toH(int n, char rodA, char rodB, char rodC)
{
	if (n == 1)
	{
		printf("\n Move disk 1 from rod %c to rod %c\n",rodA ,rodC );
		return;
	}
	toH(n-1, rodA, rodC, rodB);
	printf("\n Move disk %d from rod %c to rod %c", n, rodA, rodC);
	toH(n-1, rodB, rodA,rodC);
}

int main()
{
	int no_of_disks ;
	printf("Enter number of disks: ");
	scanf("%d", &no_of_disks);
	toH(no_of_disks, 'A','B','C'); 
	return 0;
}

