#include<stdio.h>
#include<string.h>
struct Employee
{
    int code;
    float salary;
    char name[20];
};
void show(struct Employee emp){
    printf("The code of the employee is--> %d\n", emp.code);
    printf("The salary of the employee is--> %.2f\n", emp.salary);
    printf("The name of the employee is--> %s\n", emp.name);
}
void main()
{
    struct Employee e1;
    struct Employee *ptr;
    ptr = &e1;
    ptr->code = 100;
    ptr->salary = 345.76;
    strcpy(ptr->name, "Tuhin");
    show(e1);
}