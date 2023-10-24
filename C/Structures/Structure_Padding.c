#include<stdio.h>
struct num1
{
    char a;
    int b;
    char c;
}n1;
struct num2
{
    char a;
    char c;
    int b;
}n2;
void main()
{
    printf("%d\n", sizeof(n1));
    printf("%d\n", sizeof(n2));
    printf("Memory wastage = %d",(sizeof(n1)- sizeof(n2)));
}