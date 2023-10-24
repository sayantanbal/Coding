#include <stdio.h>

int main()
{
    int x = 8, y = 10;
    int a, b, c, d;
    a = (x == y);
    printf("%d\n", a);
    b = (x != y);
    printf("%d\n", b);
    c = (x > y);
    printf("%d\n", c);
    d = (x < y);
    printf("%d\n", d);
    return 0;
}