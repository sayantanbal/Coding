#include<stdio.h>

void main()
{
    int a;
    printf("Enter the number:");
    scanf("%d", &a);
    (a%2==0)?printf("EVEN"):printf("ODD");
}