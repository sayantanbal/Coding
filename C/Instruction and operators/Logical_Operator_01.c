#include<stdio.h>

void main()
{
    int a=4, b=6, result;
    // result = a>b && printf("Tuhin");
    // result = a<b && printf("Tuhin");
    // result = a<b && printf("Tuhin") || printf("Ghosh");
    result = a<b && printf("Tuhin") && printf("Ghosh");
    printf("%d", result);
}