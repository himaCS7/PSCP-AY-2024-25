#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */
int max; /* maximum length seen so far */
char line[MAXLINE]; /* current input line */
char longest[MAXLINE]; /* longest line saved here */

int getLine(); // using L to avoid confusion with stdlib getline()
void copy();
/* print the longest input line */
int main()
{
	int len; /* current line length */
	max = 0;
        while ((len = getLine()) > 0)
		if (len > max) {
			max = len;
			copy();
		}	
	if (max > 0) /* there was a line */
		printf("max line len=%d, line=\" %s\"\n", max, longest);
	return 0;
}
/* getline: read a line into s, return length */
int getLine()
{
	int c, i;
	for (i=0; i < MAXLINE-1 && (c=getchar()) != EOF && c!='\n'; ++i)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}
/* copy: copy 'from' into 'to'; assume to is big enough */
void copy()
{
	int i;
	i = 0;
	while ((longest[i] = line[i]) != '\0')
		++i;
}
