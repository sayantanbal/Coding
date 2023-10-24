#include <stdio.h>
#include <stdlib.h>
void even_odd(int);
void main()
{
    int a;
    printf("Enter the number you want to check :");
    scanf("%d", &a);
    even_odd(a);
}
void even_odd(int x)
{
    if (x % 2 == 0)
    {
        printf("The number is even!");
    }
    else
    {
        printf("The number is odd");
    }
}