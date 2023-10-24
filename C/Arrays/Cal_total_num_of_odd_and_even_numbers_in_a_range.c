#include <stdio.h>
int main()
{
    int num[10], Neven = 0, Nodd = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the %dth number :", (i + 1));
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0)
        {
            Neven++;
        }
        else
        {
            Nodd++;
        }
    }
    printf("Total number of even numbers in this array is %d\n", Neven);
    printf("Total number of odd numbers in this array is %d\n", Nodd);
    return 0;
}