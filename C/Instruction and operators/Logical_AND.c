#include <stdio.h>

void main()
{
    int a = 10, b = 5;
    int result;
    result = a>b && b!=10 && b<11 && a>5;
    printf("%d", result);
}