#include<stdio.h>
#include<math.h>
main(){
	int n,i, cnt=0;
	printf("enter n to find if it is prime: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
		if(n%i == 0)
			cnt++;
	if(cnt == 2)
		printf("prime");
	else
		printf("composite");
	return 0;
}