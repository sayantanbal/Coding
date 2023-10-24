#include <stdio.h>
#include <math.h>
float Sum(float, float);
float Sub(float, float);
float Mul(float, float);
float Div(float, float);
float Sqaroot(float);
int Rem(int, int);
void main()
{
    int ch;
    float a, b, res;
    printf("\n Enter 1 for Addition");
    printf("\n Enter 2 for Subtraction");
    printf("\n Enter 3 for Multiplication");
    printf("\n Enter 4 for Divison");
    printf("\n Enter 5 for Square root");
    printf("\n Enter 6 for Remainder");
    printf("\nEnter your choice:");
    scanf("%d", &ch);
    printf("Enter the first value:");
    scanf("%f", &a);
    printf("Enter the second value:");
    scanf("%f", &b);
    switch (ch)
    {
    case 1:
        printf("The addition of two numbers are %f\n", Sum(a, b));
        break;
    case 2:
        printf("The subtraction of two numbers are %f\n", Sub(a, b));
        break;
    case 3:
        printf("The multiplication of two numbers are %f\n", Mul(a, b));
        break;
    case 4:
        printf("The division of two numbers are %f\n", Div(a, b));
        break;

    case 5:
        printf("The Square root of the first number is %f\n", Sqaroot(a));
        printf("The Square root of the second number is %f\n", Sqaroot(b));
        break;
    case 6:
        printf("The Remainder is %d\n", Rem(a, b));
        break;
    default:
        printf("Enter a valid choice!");
        break;
    }
}
float Sum(float x, float y)
{
    return x + y;
}
float Sub(float x, float y)
{
    return x - y;
}
float Mul(float x, float y)
{
    return x * y;
}
float Div(float x, float y)
{
    return x / y;
}
int Rem(int x, int y)
{
    return x % y;
}
float Sqaroot(float x)
{
    return sqrt(x);
}