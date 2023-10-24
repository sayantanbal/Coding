#include <stdio.h>
int main()
{
    int num[6];
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the %dth element :", (i + 1));
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        if (num[i] < 0)
        {
            num[i] = num[i] * (-1);
        }
        printf("%d\n", num[i]);
    }
    return 0;
}