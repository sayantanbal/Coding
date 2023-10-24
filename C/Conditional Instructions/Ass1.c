#include <stdio.h>

int main()
{
    int a, b, max, min, GCD = 1, LCM = 1;
    printf("Enter the first number :");
    scanf("%d", &a);
    printf("Enter the second number :");
    scanf("%d", &b);
    if (a > b)
    {
        max = a;
        min = b;
        printf("%d is maximum\n", max);
        printf("%d is minimum\n", min);
    }
    else
    {
        max = b;
        min = a;
        printf("%d is maximum\n", max);
        printf("%d is minimum\n", min);
    }
    for (int i = 1; i <= min; i++)
    {
        if (min % i == 0 && max % i == 0)
        {
            GCD = GCD * i;
        }
        if (min % i == 0 || max % i == 0)
        {
            LCM = LCM * i;
        }
    }
    printf("The GCD of thrm is %d\n", GCD);
    printf("The LCM of thrm is %d\n", LCM);
    if (a % b == 0 || b % a == 0)
    {
        printf("The numbers are divisible to each other!");
    }
    else
    {
        printf("The numbers are not divisible to each other!");
    }
    return 0;
}