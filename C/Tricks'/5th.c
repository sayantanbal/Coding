#include <stdio.h>
int main()
{
    int a = 3;
    // printf("%d %d %d %d\n", a++, ++a, ++a, a++);
    // printf("%d\n", a++);
    // printf("%d\n", a++);
    // printf("%d\n", ++a);
    // printf("%d\n", ++a);
    printf("%d %d %d %d %d %d\n", ++a, ++a, ++a, ++a, a++, a++);
    return 0;
}