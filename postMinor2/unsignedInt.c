// to illustrate unsined int
#include <stdio.h>
int main()
{
    unsigned short int u = 0;
    printf("%u ", u);
    u = u - 1;        // can not be -ve!
    printf("%u ", u); // it will wrap around, so it will go to the largest value
}
