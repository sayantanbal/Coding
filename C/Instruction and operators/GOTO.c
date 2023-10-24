#include<stdio.h>

void main()
{
    int a, i=1;
    printf("Enter the number which table you want to print:");
    scanf("%d", &a);
    table:
    printf("%d X %d = %d\n", a, i, a*i);
    i++;
    if(i<=10)
    goto table;
}