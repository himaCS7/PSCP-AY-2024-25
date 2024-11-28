/* Determine the student grade among P and F
The passing threshold for total marks is a minimum of
(i) 35% of the highest mark in the total marks of the subject
(ii) 50% of the class average of total marks (including the marks obtained by ‘F’ grade students also)

File contains three columns: Roll_No,Name,Marks
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    char name[50];
    int rollNo;
    float marks;
    char grade;
} student;

float min(float x, float y)
{
    x < y ? x : y;
}
// to search a student record by roll number
student *LinSearch(student class[], int rollNo, int n);

int main()
{
    student class[100]; // array of 100 students
    int i, n;
    char line[100];
    FILE *fp = fopen("CS1011_internal_marks_CSE.csv", "r"); // open in read mode
    if (fp == NULL)
    {
        printf("Can't open file\n");
        return 0;
    }
    i = 0;
    // read the first line of the file containing the column names and discard
    fgets(line, 100, fp);
    // puts(line);  //print to see the header
    while (fgets(line, 100, fp)) // read line until EOF
    {
        // line from the file is in line
        // tokenize the string line
        class[i].rollNo = atoi(strtok(line, ",")); // int of the first token
        strcpy(class[i].name, strtok(NULL, ","));  // next token is a string
        class[i].marks = atof(strtok(NULL, ","));  // next token is a float
        // printf("%d, %s, %.2f\n", class[i].rollNo, class[i].name, class[i].marks);

        i++; // increment count of the students
    }
    fclose(fp);
    n = i; // n is the number of students in the file
    // find max mark and average mark
    float max = -1, sum = 0, avg;
    for (i = 0; i < n; i++)
    {
        if (class[i].marks > max)
            max = class[i].marks;
        sum += class[i].marks;
    }
    avg = sum / n;

    float passMark = min(0.5 * avg, 0.35 * max);
    printf("The pass mark=%.2f\n", passMark);
    // assign grades P or F and display
    for (i = 0; i < n; i++)
    {
        if (class[i].marks < passMark)
            class[i].grade = 'F';
        else
            class[i].grade = 'P';
        printf("%d, %s, %.2f, %c\n", class[i].rollNo, class[i].name, class[i].marks, class[i].grade);
    }
    char choice;
    do
    {
        int rollNo;
        printf("enter the roll number of the student to check the details: ");
        scanf("%d", &rollNo);
        student *record = LinSearch(class, rollNo, n);
        if (record != NULL)
            printf("Roll number %d name=%s marks=%.2f grade=%c\n", record->rollNo, record->name, record->marks, record->grade);
        else
            puts("the roll number does not exist in this class!");
        puts("do you want check another student? (y/n)");
        // flush the '\n' in the stdin buffer
        while ((getchar()) != '\n')
            ;
        choice = getchar();
    } while (choice == 'y' || choice == 'Y');

    return 0;
}

student *LinSearch(student class[], int rollNo, int n)
{
    student *record;
    int i;
    for (i = 0; i < n; i++)
    {
        if (class[i].rollNo == rollNo)
        {
            record = &class[i];
            return record;
        }
    }
    return NULL; // not found in the class!
}
