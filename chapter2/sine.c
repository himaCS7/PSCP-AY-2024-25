#include<stdio.h>
#include<math.h>
void main()
{
    int i, n;
    float deg,x, sum, term;

    printf(" Enter the value for degrees : ");
    scanf("%f",&deg);

    printf(" Enter the value for n : ");
    scanf("%d",&n);

    x=deg*3.14159/180;  /*convert degrees to radians*/
    term=x;
    sum=x;

    printf(" term = %.4f sum = %.4f\n",term,sum);

    /* Loop to calculate the value of Sine */
    for(i=3;i<=n;i+=2)
    {
        term = -term*x*x/(i*(i-1));
        sum=sum+term;
        printf(" term = %.4f sum = %.4f\n",term,sum);
    }

    printf(" The value of Sin(%f) = %.4f (using library fn = %.4f)\n",deg,sum, sin(x));
}

