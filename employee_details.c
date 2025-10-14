#include <stdio.h>

struct Employee
{
    int employ_id;
    char name[50];
    char designation[50];
    char department[50];
    float salary;
};

int main()
{
    struct Employee emp;

    printf("Enter Employee ID= ");
    scanf("%d", &emp.employ_id);

    printf("Enter Name= ");
    scanf("%s", &emp.name);

    printf("Enter Designation= ");
    scanf("%s", &emp.designation);

    printf("Enter Department= ");
    scanf("%s", &emp.department);

    printf("Enter Salary= ");
    scanf("%f", &emp.salary);

    printf("Employee Details");
    printf("ID: %d\n", emp.employ_id);
    printf("Name: %s\n", emp.name);
    printf("Designation: %s\n", emp.designation);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}
