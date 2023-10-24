#include <stdio.h>
#define MAX(a, b)               \
    if (a > b)                  \
        printf("%d is max", a); \
    else                        \
        printf("%d is max", b);
void main()
{
    MAX(3, 4);
}