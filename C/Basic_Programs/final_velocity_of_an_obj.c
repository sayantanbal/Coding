#include <stdio.h>
#include <conio.h>
int main()
{
    int v, u, a, t;
    printf("Enter the initial velocity of that object :");
    scanf("%d", &u);
    printf("Enter the accelaration of that object :");
    scanf("%d", &a);
    printf("Enter the time period :");
    scanf("%d", &t);
    v = u + a * t;
    printf("The final velocity of that object is=%d\n", v);

    return 0;
}