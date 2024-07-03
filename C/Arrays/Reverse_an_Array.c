#include <stdio.h>
int main()
{
    int arr1[5], arr2[5], j = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %dth element of the array:", (i + 1));
        scanf("%d", &arr1[i]);
    }
    for (int i = 4; i >= 0; i--)
    {
        arr2[j] = arr1[i];
        j++;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Reverse--->%d\n", arr2[i]);
    }

    return 0;
}