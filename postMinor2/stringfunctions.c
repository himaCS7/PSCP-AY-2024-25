// String functions (libray functions: page 249 K&R, own implementation: chapter 5 K&R
#include <stdio.h>
#include <string.h>

int my_strlen(char *s) // without pointers
{
	int i = 0;
	while (s[i] != '\0')
		i++;
	return i;
}

int my_strlen1(char *s) // using pointers
{
	char *p = s;
	while (*p != '\0')
		p++;
	return (p - s);
}

int my_strlen2(char *s) // using pointers another version,
// illustrate that s is a local variable
{
	int l = 0;
	while (*s++ != '\0')
		l++;
	return l; // though s has moved past the end of the string i.e beyond '\0',
	// s value = starting address, remains the same in main() as s is local to this function
}

char *my_strcpy(char *d, char *s) // witout pointers
{
	int i = 0;
	while (s[i] != '\0')
	{
		d[i] = s[i]; // assignment of ith char, do not combine with ++ as [] has high precedence than =
		i++;
	}
	/* alternative logic:
	for(i=0; i < strlen(s); i++)
		d[i] = s[i];
	*/
	d[i] = '\0';
	return d;
}

char *my_strcpy1(char *d, char *s) // using pointers
{
	char *tmp = d; // store the address of d
	/*	while((*d = *s) != '\0'){  // one approach to copy the string
			s++;
			d++;
		} */
	while ((*d++ = *s++))
		; // another way, and it is the simplest code!,
	// the unary operator has R->L associativity, but postfix ++ will work after using the values
	// d and s move beyond '\0' after asigning '\0'
	d = tmp; // restore d starting address saved in tmp
	return d;
}

char *my_strcat(char *d, char *s) // without pointers
{
	int i = 0, j;
	while (d[i]) // move to the end of d
		i++;
	//	printf("\n%d\n", i); // check that end of the destination is reached
	// now i is at '\0' (null char) of d
	// copy s at the end of d
	j = 0; // to index in s from the beginning of s
	while (s[j])
		d[i++] = s[j++];
	d[i] = '\0';
	return d;
}

char *my_strcat1(char *d, char *s) // using pointers
{
	char *tmp = d; // store the address of d
	while (*d++)   // move to the end of d, d is after '\0', one position beyond '\0'
		;
	d--; // move d to '\0'
	/* alternatie logic to move to the end of d
	while(*d)
		d++;
	//now d is at '\0'
	*/
	// copy s at the end of d including '\0'
	/*	while(*s) // one possible way
		{
			*d = *s;
			d++;
			s++;
		}
		*d = '\0'; //null char is not assigned in the loop	*/
	/*  to check the values of *d and the number of bytes it has moved from tmp
		printf("*d =  %c, pos = %d \n", *d, (int) (d-tmp));*/
	while ((*d++ = *s++)) // another possible way, smarter!,
		//'\0' is also assigned in the loop as seen in my_strcpy1()
		;
	d = tmp; // reset to the starting address of d
	return d;
}

int main()
{
	char s[] = "Hello, World!";
	char d[30];
	char *p = s;

	printf("%c %c\n", *s, *p);
	printf("%c %c %c %c\n", *(s + 1), s[1], *(p + 1), p[1]);
	printf("%c %c %c %c\n", *(s + 2), s[2], *(p + 2), p[2]);

	printf("strlen(s) = %d\nmy_strlen(s) =%d \nmy_strlen1(s) with pointers = %d\n my_strlen2(s) with pointers =%d\n", (int)strlen(s), my_strlen(s), my_strlen1(s), my_strlen2(s)); // strlen() from string.h returns size_t datatype
	printf("\n strcpy(d,s) = %s\n", strcpy(d, s));																																   // funciton from string.h
	d[0] = '\0';																																								   // set d[0]='\0' as it is already modified in the previous call to strcpy, to see the effect of copy by my_strcpy1
	printf("\n my_strcpy(d,s) = %s\n", my_strcpy(d, s));
	d[0] = '\0'; // set d[0]='\0' to see the effect of next function call
	printf("\n my_strcpy1(d,s) with pointers= %s\n", my_strcpy1(d, s));

	// check strncpy(d,s,n) to copy atmost n chars from s to d, as homework

	printf("string concat = %s\n", strcat(d, s)); // function from string.h
	strcpy(d, s);								  // reset d to s as it is alread modified in the previous function call
	printf("string concat without pointers = %s\n", my_strcat(d, s));
	strcpy(d, s); // reset d to s as it is alread modified in the previous function call
	printf("string concat using pointers = %s\n", my_strcat1(d, s));
	return 0;
}
