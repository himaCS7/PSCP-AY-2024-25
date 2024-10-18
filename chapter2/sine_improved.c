#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void main()
{
    int i;
    float deg,x, sum, term;

    printf(" Enter the value for deg : ");
    scanf("%f",&deg);


    x=deg*3.14159/180;  /*convert degrees to radians*/
    term=x;
    sum=x;
    i=1;

    /* Loop to calculate the value of Sine */
    while(fabs(term) > 0.00001) /*check if term absolute value is too small, float values can not be compared with == zero due to representation of float data type */
    {
	i += 2;
        term = -term*x*x/(i*(i-1));
        sum = sum+term;
        printf(" term = %.4f, sum = %.4f \n",term,sum);
    }
    printf("i=%d\n", i);
    printf(" The value of Sin(%.2f) = %.4f (using library fn = %.4f)\n",deg,sum, sin(x));
}

