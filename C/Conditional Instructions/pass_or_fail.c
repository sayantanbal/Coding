#include <stdio.h>
#include <conio.h>
int main()
{
    int econ, math, stat;
    float total;
    printf("Enter Economics marks :");
    scanf("%d", &econ);
    printf("Enter Mathematics marks :");
    scanf("%d", &math);
    printf("Enter Statistics marks :");
    scanf("%d", &stat);
    total = (econ + math + stat) / 3;
    if (total < 40 || econ < 33 || math < 33 || stat < 33)
    {
        printf("The total marks of the student is =%f and the student is fail", total);
    }
    else
    {
        printf("The total marks of the student is =%f and the student is pass", total);
    }
    return 0;
}