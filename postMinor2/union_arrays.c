/*
Using arrays of unions in C is an excellent way to manage collections of data where each element can have one of several types, and only one type is needed at a time.
Imagine a system where employee data can have different types of information:

    1. Hourly employees: Store hours worked (an integer).
    2. Salaried employees: Store their monthly salary (a float).
    3. Contractors: Store their contract status (a single character, e.g., 'A' for active, 'I' for inactive).

We can use an array of unions to represent this data.
*/
#include <stdio.h>

// Define a union to hold employee data
union EmployeeData
{
    int hoursWorked;     // For hourly employees
    float salary;        // For salaried employees
    char contractStatus; // For contractors
};

// Define a structure to combine the union with additional info
struct Employee
{
    char type; // 'H' for hourly, 'S' for salaried, 'C' for contractor
    union EmployeeData data;
};

int main()
{
    // Create an array of employees
    struct Employee employees[3];

    // Assign data to the first employee (Hourly)
    employees[0].type = 'H';
    employees[0].data.hoursWorked = 40;

    // Assign data to the second employee (Salaried)
    employees[1].type = 'S';
    employees[1].data.salary = 5000.50;

    // Assign data to the third employee (Contractor)
    employees[2].type = 'C';
    employees[2].data.contractStatus = 'A';

    // Display all employees
    printf("Employee Records:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Employee %d:\n", i + 1);
        switch (employees[i].type)
        {
        case 'H':
            printf("  Type: Hourly\n");
            printf("  Hours Worked: %d\n", employees[i].data.hoursWorked);
            break;
        case 'S':
            printf("  Type: Salaried\n");
            printf("  Salary: %.2f\n", employees[i].data.salary);
            break;
        case 'C':
            printf("  Type: Contractor\n");
            printf("  Contract Status: %c\n", employees[i].data.contractStatus);
            break;
        default:
            printf("  Unknown Employee Type!\n");
        }
    }

    return 0;
}
