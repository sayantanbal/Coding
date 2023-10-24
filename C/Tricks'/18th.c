#include <stdio.h>
int main()
{
    int a = 2, b = 3, c = 2, x, p;
    p = a || b; //test
    printf("%d\n", p); //test
    x = a++ || b++ || c++;
    printf("%d %d %d %d\n", x, a, b, c);
    return 0;
}