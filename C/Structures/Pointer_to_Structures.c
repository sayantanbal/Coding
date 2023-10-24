#include<stdio.h>
struct Employee
{
    int code;
    float salary;
    char name[20];
};
void main()
{
    struct Employee e1;
    struct Employee *ptr;
    ptr = &e1;
    // (*ptr).code = 100;
    // We can also use -> operator as follows:
    ptr->code = 100;
    printf("%d", e1.code);
}