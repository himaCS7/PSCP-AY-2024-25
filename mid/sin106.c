// to compute sin() value with error below 10^-6
#include<stdio.h>
#include<math.h>

float sin106(float x)
{
    float sum, term;
	int i;
    x=x*3.14159/180;  //convert degrees to radians, as x is "call by value" it can be modeified safely
    term=x;
    sum=x;
    i=1;
    /* Loop to calculate the value of Sine */
    while(fabs(term) > 0.000001) //check if absolute value of term is above the error, can compare with 1e-6 too
    {
		i += 2; // to get odd values 
        term = -term*x*x/(i*(i-1));  //the common term observed from the sin series
        sum = sum+term;
    }
    //printf("\ncomputed %d terms\n", i/2); // to see how many times the term is computed, optional
	return sum;
}

int  main()
{
	float deg;
    printf(" Enter degrees to find sin function value : ");
    scanf("%f",&deg);
	printf("The value of sin(%.2f) = %.6f \n",deg,sin106(deg));
	return 0;
}

