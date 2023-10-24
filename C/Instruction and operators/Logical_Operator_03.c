#include<stdio.h>

void main()
{
    int a=10, b=5, result;
    result = (a>b) && a++;
    printf("%d\n", result);
    printf("%d", a);
}