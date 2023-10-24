#include <stdio.h>

int main()
{

    // Increment Part --->

    int a[] = {3, 2, 67, 0, 56};
    int *p;
    p = a; // but a = p; is not correct we can not change a!
    // printf("%d %d\n", *p++, *p++);
    printf("%d\n", *p);
    p++;
    printf("%d\n", *p);
    printf("%d\n", *p++);
    printf("%d\n", *p);
    printf("%d\n", *++p);

    // Decrement Part --->

    int b[] = {30, 12, 9, 8, 6};
    int *q;
    q = &b[3];

    printf("%d %d %d\n", *--q, *--q, *--q);

    printf("%d\n", *q);
    q--;
    printf("%d\n", *q);
    printf("%d\n", *q--);
    printf("%d\n", *q);
    printf("%d\n", *--q);

    return 0;
}