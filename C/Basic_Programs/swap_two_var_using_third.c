#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, t;
    printf("Enter the first variable :");
    scanf("%d", &a);
    printf("Enter the second variable :");
    scanf("%d", &b);
    t = a;
    a = b;
    b = t;
    printf("After swapping the variables :\n");
    printf("The fist varriable is=%d\n", a);
    printf("The second varriable is=%d\n", b);
    return 0;
}