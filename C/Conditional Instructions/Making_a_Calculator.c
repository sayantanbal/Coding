#include <stdio.h>
int main()
{
    int ch;
    float a, b, res;
    printf("\nEnter 1 for addtion");
    printf("\nEnter 2 for subtraction");
    printf("\nEnter 3 for multiplication");
    printf("\nEnter 4 for division");
    printf("\n Enter your choice :");
    scanf("%d", &ch);
    printf("Enter first value :");
    scanf("%f", &a);
    printf("Enter second value :");
    scanf("%f", &b);

    switch (ch)
    {

    case 1:
        res = a + b;
        break;
    case 2:
        res = a - b;
        break;
    case 3:
        res = a * b;
        break;
    case 4:
        res = a / b;
        break;

    default:
        printf("Wrong Entry!!!");
        break;
    }

    printf("The result is =%f", res);
    return 0;
}