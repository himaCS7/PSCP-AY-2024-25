// Chapter 3, itoa function to convert int to string
#include <stdio.h>
#include <string.h>
/* reverse: reverse string s in place */
void reverse(char s[])
{
	int c, i, j;
	for (i = 0, j = strlen(s)-1; i < j; i++, j--) {	
		//swap s[i] and s[j], can use swap function too
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

//convert int to string
void itoa(int n, char s[])
{
	int i, sign;
	if ((sign = n) < 0) /* record sign */
		n = -n; /* make n positive */
	i = 0;
	do { /* generate digits in reverse order */
		s[i++] = n % 10 + '0'; /* get next digit as char and store in s */
	}while ((n /= 10) > 0); /* delete the last digit and continue the loop if more digits are there */
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	printf("string  before reverse= %s\n", s);
	reverse(s);
}

int main()
{
	int n;
	char s[30];
	printf("enter n : ");
	scanf("%d",&n);
	itoa(n,s);
	printf("%d in string = %s\n", n, s);
	return 0;
}
