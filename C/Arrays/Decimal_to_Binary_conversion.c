#include <stdio.h>
int main()
{
    int n, rem, i = 0;
    int arr[20];
    printf("Enter the Decimal Number :");
    scanf("%d", &n);
    if (n==0)
    {
        printf("The Binary Number is ---> 0");
    }
    else
    {
    while (n != 0)
    {
            rem = n % 2;
            n = n / 2;
            arr[i] = rem;
            i++;
    }
    printf("The Binary Number is ---> ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }
    }

    return 0;
}