#include<stdio.h>
#include<string.h>
void reverse(char*, char*);//functionn declaration
int main()
{
	char s[]="Rama is a king";
	char r[strlen(s)+1];
	reverse(s,r);
	printf("reverse of %s = %s\n", s,r);
}
void reverse(char *s, char r[])
{
	int n = strlen(s);
	int i;
	for(i=0; s[i]!= '\0';i++)
		r[n-1-i] = s[i];
	r[i] = '\0';
	return;
}

