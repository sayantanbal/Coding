#include <stdio.h>

int main()
{
    int a = 10, b = 11;
    int *p, *q;
    p = &a;
    q = p;
    // *q = *p; --> This is not correct! We have to initialize q!
    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *p);
    printf("The value of a is %d\n", *q);

    q = &b;
    *q = *p; // Accessing values
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    printf("The value of a is %d\n", *p);
    printf("The value of a is %d\n", *q);

    return 0;
}