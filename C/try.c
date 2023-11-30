// program to multiply first 10 natural numbers
#include <stdio.h>
int main()
{
    int i, n, mul = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        mul = mul * i;
    }
    printf("Multiplication of first %d natural numbers = %d", n, mul);
    return 0;
}