#include<stdio.h>
struct Employee
{
    int code;
    float salary;
    char name[20];
};

void main()
{
    struct Employee facebook[10];
    /*facebook[0].code = 100;
    facebook[1].code = 101;*/
    // Another way---->
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the code of %dth employee:", (i+1));
        scanf("%d", &facebook[i].code);
    }
    printf("\nThe codelist of all Employees---->\n");
    for (int i = 0; i < 10; i++)
    {
        printf("The code of the %dth employee is %d\n", (i+1), facebook[i].code);
    }
        
}