#include <stdio.h>

void main()
{
    int a = 18, b = 9, c, d, e = 10, f;
    c = b++;
    d = b;
    printf("%d\n", a < b<c> d);
    printf("%d\n", b == e);
    printf("%d\n", c + 1 > e);
    printf("%d\n", a + c == b > e < c + d);
    f = a > b > d < c;
    printf("%d\n", f != 1);
    printf("%d", a + c == b >= e < c + d != 1);
}