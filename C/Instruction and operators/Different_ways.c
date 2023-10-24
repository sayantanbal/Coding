#include <stdio.h>

int main()
{
    int a = 5, b = 7;
    int x, y, z, p, q, r;
    x = (a > b);
    printf("%d\n", x);
    // in this case it will return 0 cause the condition is false!
    y = (a < b);
    printf("%d\n", y);
    // in this case it will return 1 cause the condition is true!
    z = (a=b);
    printf("%d\n", z);
    // The value of b will be assigned in a by the assignment operator!!!
    p = (a == b);
    printf("%d\n", p);
    // It is true cause the value of b was assigned in a in the line 13!!
    q = (a != b);
    printf("%d\n", q);
    // It is not true, so it will return 0!
    r = (a >= b);
    printf("%d\n", r);
    // It is true cause the operator includes '='!
    return 0;
}