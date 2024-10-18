#include<stdio.h>
#include<math.h>
main(){
	int m;
	printf("enter n to find its smallest divisor: ");
	scanf("%d",&m);
	if(m%2 == 0)
		printf("2 is the smallest divisor of %d\n",m);
	else
	{	
		int r = (int) sqrt(m); //typecast as float is the return type of sqrt()
		int d = 3;
		for(; d <= r; d+=2)
			if(m%d == 0){
				printf("%d is the smallest divisor of %d\n",d,m);
				return 0;
			}
		printf("%d is prime\n", m);
	}
	return 0;
}
