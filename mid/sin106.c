#include<stdio.h>
#include<math.h>

void main()
{
    int i;
    float deg,x, sum, term;

    printf(" Enter degrees to find sin function value : ");
    scanf("%f",&deg);


    x=deg*3.14159/180;  /*convert degrees to radians*/
    term=x;
    sum=x;
    i=1;

    /* Loop to calculate the value of Sine */
    while(fabs(term) > 0.000001) /*check if term absolute value is too small, float values can not be compared with == zero due to representation of float data type */
    {
		i += 2;
        term = -term*x*x/(i*(i-1));
        sum = sum+term;
        printf(" term = %f, sum = %f \n",term,sum);
    }
    printf("\ncomputed %d terms\n", i/2);
    printf(" The value of Sin(%.2f) = %.6f \n",deg,sum);
}

