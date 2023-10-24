#include <stdio.h>

int main()
{
    int a = 10, b = 9;
    int c;
    int *p, *q;
    p = &a;
    q = &b;
    c = *q;
    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *p);
    printf("The address of a is %x\n", &a);
    printf("The address of a is %u\n", &a);
    printf("The address of a is %x\n", p);
    printf("The address of a is %u\n", p);
    printf("The address of p is %x\n", &p);
    printf("The address of p is %u\n", &p);
    printf("The value of c is %d\n", c);

    *p = 20;
    printf("The value of a is %d\n", a);
    printf("The address of a is %x\n", p);
    return 0;
}