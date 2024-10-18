#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int r ; 
	int d;
	printf("enter n (>9) to find if it is prime: ");
	scanf("%d",&n);
	if(n<=9) 
	{
		printf("hey kid,don't play with me");
		return 0;
	}
	if(n%2 ==0)
			printf("%d is composite\n",n);
	else{
		r = (int) sqrt(n);
		for(d=3; d <= r; d+=2)
		{
			printf("%d\t", d);	
			if(n%d == 0){
				printf("%d is composite\n",n);
				break;
			}
		}
        if ( d>r)
			printf("%d is prime\n", n); 
	}
	return 0;
}
