#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the number you want to check :");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is a even number!", a);
    }
    else
    {
        printf("%d is a odd number!", a);
    }
    printf("\n Enter the divisor :");
    scanf("%d", &b);
    if (a % b == 0)
    {
        printf("The number is divisible by the divisor");
    }
    else
    {
        printf("The number is not divisible by the divisor");
    }
    return 0;
}