#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    // int **q = &a; ---> Warning!!
    printf("a= %d, %d, %d", a, *p, **q);

    int ***r = &q;
    printf("\n The value of a is %d", ***r);

    // *q = 25; --> This is invalid!
    ***r = 50;
    printf("\n The value of a is %d", a);
    return 0;
}