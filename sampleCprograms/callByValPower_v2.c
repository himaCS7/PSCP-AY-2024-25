#include <stdio.h>
int power(int , int );
/* test power function */
main()
{
	int n=3;
//	for (i = 0; i < 10; ++i)
//		printf("%d %d %d\n", i, power(2,i), power(-3,i));
	printf("2^3 = %d\n", power(2,n));
	printf("n in main =%d\n", n);
	return 0;
}
/* power: raise base to n-th power; n >= 0 */
int power(int base, int n)
{
	int p;
	for (p = 1; n >0 ; --n)
	{
		p = p * base;
		printf("n=%d p=%d base=%d\n", n, p, base);
	}
	return p;
}
