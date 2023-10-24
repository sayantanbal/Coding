#include <stdio.h>
int main()
{
    int arr1[5], arr2[5], sumArr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %dth element of the first array:", (i + 1));
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %dth element of the second array:", (i + 1));
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sumArr[i] = arr1[i] + arr2[i];
        printf("The %dth element of the third array is %d\n", (i + 1), sumArr[i]);
    }

    return 0;
}