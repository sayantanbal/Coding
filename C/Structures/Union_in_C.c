#include <stdio.h>
union abc
{
    int a;
    char b;
    float c;
};

void main()
{
    union abc u;
    u.a = 1;
    u.b = 97;
    u.c = 9.2;
    printf("a=%d\n", u.a); // print garbage value
    printf("b=%d\n", u.b); // print garbage value
    printf("c=%d\n", u.c); // print actual value because the last value is the final value
}