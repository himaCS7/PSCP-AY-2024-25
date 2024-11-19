// Sort strings using array of pointers
#include <stdio.h>
#include <string.h>

// shall we sort in ascending order
void insertionSort(char *s[], int n)
{
	int i, j;
	char *p;
	for (i = 1; i < n; i++)
	{
		p = s[i];
		// insert element p in the sorted list s[0..i-1]
		for (j = i - 1; j >= 0 && strcmp(s[j], p) > 0; j--)
		{
			s[j + 1] = s[j];
		}
		// place p at (j+1)th position
		s[j + 1] = p;
	}
}

int main()
{
	char *s[] = {"January", "February", "March", "April", "May", "June"};
	int n = 6;
	printf("The array of strings initially: ");
	for (int i = 0; i < n; i++)
		printf("%s ", s[i]); // puts() can also be used to print string
	insertionSort(s, n);
	printf("\nThe array of strings after sorting: ");
	for (int i = 0; i < n; i++)
		printf("%s ", s[i]); // puts() can also be used to print string
	return 0;
}
