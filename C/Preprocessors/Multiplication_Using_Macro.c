#include<stdio.h>
#define MUL(a,b) a*b
void main()
{
    // int a, b;
    // printf("Enter the valus of a and b:");
    // scanf("%d %d", &a, &b);
    // printf("Multiplication of a and b is %d", MUL(a,b));

    printf("Multiplication of a and b is %d", MUL(5-2,7+4));

    #undef MUL
    // now you can not implement MUL!!
    printf("Multiplication of a and b is %d", MUL(5-2,7+4));
}