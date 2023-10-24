#include <stdio.h>
int main()
{
    int n, fac = 1;
    printf("Enter the value of n :");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("The factorial of the number 0 is 1");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fac *= i;
        }
    printf("The factorial of the number %d is %d", n, fac);
    }
    return 0;
}