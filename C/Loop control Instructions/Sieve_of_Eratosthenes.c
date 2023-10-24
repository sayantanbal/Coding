#include <stdio.h>
void primeNumber(int n)
{
    int prime[100000] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            printf("%d is prime number\n", i);
        }
    }
}
void main()
{
    int n;
    printf("Enter the range :");
    scanf("%d", &n);
    primeNumber(n);
}