// Program to store the names when the number of names is not known in advance and can be entered by the user at runtime.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i;
    char **names; // array of strings, also a 2D array of char

    // Ask user for the number of names
    printf("Enter the number of names: ");
    scanf("%d", &n);

    // Allocate memory for 'n' char pointers
    names = (char **)malloc(n * sizeof(char *)); // array of n pointers, each pointer will point to a string
    if (names == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Allocate memory for each student's name
    for (i = 0; i < n; i++)
    {
        // names[i] = (char *)malloc(50 * sizeof(char)); // Assuming each name is <= 50 characters, we can read the length of the name of each student use it instead of 50
        //  we can use calloc too, as shown below:
        names[i] = (char *)calloc(50, sizeof(char));
        if (names[i] == NULL)
        {
            printf("Memory allocation failed for student %d.\n", i + 1);
            return 1; // 1 is returned to state that there is a problem
        }

        // Get student name
        printf("Enter the name of student %d: ", i + 1);
        scanf(" %[^\n]", names[i]); // Using " %[^\n]" to read full line, including spaces in the name
    }

    // Print all student names
    printf("\nStudent List:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }

    // Free allocated memory
    for (i = 0; i < n; i++)
    {
        free(names[i]);
    }
    free(names);

    return 0;
}
