#include <stdio.h>
#include <string.h>

struct Employee
{
    char firstName[10];
    char lastName[10];
    double salary;
};

void emp_init(struct Employee *emp)
{
    printf("Enter first name: ");
    scanf("%s", &emp->firstName);
    printf("Enter last name: ");
    scanf("%s", &emp->lastName);
    printf("Enter salary: ");
    scanf("%lf", &emp->salary);
}

void set_salary(struct Employee *emp, double salary)
{
    emp->salary = emp->salary + salary/10;
}

void emp_display(struct Employee *emp)
{
    printf("Employee Name: %s %s\n", emp->firstName, emp->lastName);
    printf("Empolyee salary %.2f\n", emp->salary);
}


int main()
{
    struct Employee e1;

    emp_init(&e1);
    set_salary(&e1,e1.salary);
    emp_display(&e1);
    
    return 0;
}
