//Chapter 4 - Functions and Program Structure
#include <ctype.h> //isspace() isdigit()
#include <stdio.h>
/* atof: convert string s to double */
double atof(char s[])
{
	double val, power;
	int i, sign;
	for (i = 0; isspace(s[i]); i++) /* skip white space */
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++; //sign is determined already, so move ahead
	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.') //move ahead for the fraction part
		i++;
	for (power = 1.0; isdigit(s[i]); i++) { //update val with fraction part too
		val = 10.0 * val + (s[i] - '0');
		power *= 10;
	}
	return sign * val / power;  // divide with power to get the correct number with fraction
}

main()
{
	char s[30];
	double num;
	printf("enter the real number : ");
	scanf("%s", s);
	num = atof(s);
	printf("the string \"%s\" after conversion to double = %f\n", s, num);
	return 0;
}
