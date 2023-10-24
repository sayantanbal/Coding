#include<stdio.h>

void main()
{
    int a, b;
    printf("Enter the first variable :");
    scanf("%d", &a);
    printf("Enter the second variable :");
    scanf("%d", &b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After swapping the variables :\n");
    printf("The fist varriable is=%d\n", a);
    printf("The second varriable is=%d\n", b);
}