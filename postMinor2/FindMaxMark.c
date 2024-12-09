/*
program to find the student's name with the max mark, code written by student
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i;
    char **names;
    int *marks, max;
    printf("Enter the number of names: ");
    scanf("%d", &n);
    names = (char **)malloc(n * sizeof(char *));
    marks = (int *)malloc(n * sizeof(int));

    if (names == NULL || marks == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    else
    {
        for (i = 0; i < n; i++)
        {

            names[i] = (char *)calloc(50, sizeof(char));
            if (names[i] == NULL)
            {
                printf("Memory allocation failed for student %d.\n", i + 1);
                return 1;
            }
        }
        for (i = 0; i < n; i++)
        {
            printf("Enter the name of student %d: ", i + 1);
            scanf("%s", names[i]);
            printf("enter the marks of%d: ", i + 1);
            scanf("%d", &marks[i]);
        }
        printf("\nStudent List:\n");
        for (i = 0; i < n; i++)
        {
            printf("%s", names[i]);
            printf("%d\n", marks[i]);
        }
        max = marks[0];
        //   printf("%d",max);
        for (i = 1; i < n; i++)
        {
            if (max < marks[i])
                max = marks[i];
            // printf("%d",i);
        }

        printf("maximum marks is %d", max);
        printf("\n%lu", sizeof(names));
        for (i = 0; i < n; i++)
        {
            printf("\n%lu", sizeof(names[i]));
            free(names[i]);
        }
        free(names);
        printf("\n%lu", sizeof(names));
        free(marks);

    } // else

    return 0;
}
