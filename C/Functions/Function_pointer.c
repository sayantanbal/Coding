#include <stdio.h>
#include <stdlib.h>
int sum(int, int);
void main()
{
    int s;
    int a, b;
    printf("Enter two numbers you want to add:");
    scanf("%d %d", &a, &b);
    int (*ptr)(int, int) = &sum;
    s = (*ptr)(a, b);
    printf("The sum of two numbers is %d\n", s);
}
int sum(int x, int y)
{
    return x + y;
}