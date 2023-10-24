#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
void main()
{
    struct employee e1;
    e1.code = 100;
    e1.salary = 324.54;
    // e1.name = "Tuhin"; --> wont work
    strcpy(e1.name, "Tuhin");

    printf("%d\n", e1.code);
    printf("%.2f\n", e1.salary);
    printf("%s\n", e1.name);
}