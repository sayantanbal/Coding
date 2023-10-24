#include <stdio.h>
void add(int a, int b)
{
    printf("%d", a + b);
}
void sub(int a, int b)
{
    printf("%d", a - b);
}
void mul(int a, int b)
{
    printf("%d", a * b);
}
void Div(int a, int b)
{
    printf("%d", a / b);
}
void main()
{
    printf("Enter 0 for addition\n");
    printf("Enter 1 for subtraction\n");
    printf("Enter 2 for multiplication\n");
    printf("Enter 3 for division\n");
    int ch, a, b;
    void (*fptr[10])(int, int) = {add, sub, mul, Div};
    printf("Enter your Choice:");
    scanf("%d", &ch);
    printf("Enter two numbers :");
    scanf("%d %d", &a, &b);
    (*fptr[ch])(a, b);
}