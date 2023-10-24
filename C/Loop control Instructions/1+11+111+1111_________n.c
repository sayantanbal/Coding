#include <stdio.h>
int main()
{
    int n, sum = 0, term = 0;
    printf("Enter the range :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        term = (term * 10) + 1;
        printf("The new term is=%d\n", term);
        sum = sum + term;
    }
    printf("The sum of the given series is=%d\n", sum);
    return 0;
}