#include <stdio.h>
#include <math.h>
int main()
{
    int n, sum = 0, term, j = 2;
    printf("Enter the range :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        term = pow((-1), j) * i;
        sum = sum + term;
        printf("The new term is=%d\n", term);
        j++;
    }
    printf("The sum of the given series is=%d\n", sum);
    return 0;
}