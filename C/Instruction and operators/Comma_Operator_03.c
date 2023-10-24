#include<stdio.h>

void main()
{
    int a =8, b;
    // b = (a++, ++a);--> comma acts like an operator!
    // b = a++, ++a;--> comma acts like an separator!
    printf("%d\n", b);
    printf("%d", a);
}