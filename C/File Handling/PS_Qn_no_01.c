#include<stdio.h>

void main()
{
    int a, b, c;
    FILE *ptr;
    ptr = fopen("PS_01.txt", "r");
    fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("The values of a , b and c are %d %d %d", a, b, c);
}