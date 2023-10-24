#include <stdio.h>
int reverse(int n)
{
    int rem, rev = 0;
    while (n != 0)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
    }
    return rev;
}
void ISprime(int n)
{
    int fl;
    for (int i = 2; i <= n / 2; i++)
    {
        fl = 0;
        if (n % i == 0)
        {
            fl = 1;
            break;
        }
    }
    if (fl == 0)
    {
        printf("%d\t", reverse(n));
    }
}
void main()
{
    int num, fl = 0;
    for (int i = 10; i <= 100; i++)
    {
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                fl = 1;
                break;
            }
        }
        if (fl != 1)
        {
            num = reverse(i);
            ISprime(num);
        }
        fl = 0;
    }
}