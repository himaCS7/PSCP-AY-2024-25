#include<stdio.h>
#include<math.h>
main(){
	float m, g1, g2;
	const float E = 0.1E-5;
	printf("enter n to find its sqrt: ");
	scanf("%f",&m);
	if(m<0){
		printf("the number is negative, try with +ve nos\n");
		return 0;
	}
	g2 = m/2;
	do{
		g1 = g2;
		g2 = (g1+m/g1)/2;
		printf("%.8f %.8f\n", g1, g2);
	}while(fabs(g1-g2) >= E);
	printf("sqrt of %.2f = %.2f (with library function=%.2f)\n", m, g2, sqrt(m));
	return 0;
}
