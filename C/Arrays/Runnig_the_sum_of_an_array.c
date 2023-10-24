#include <stdio.h>
// #define N 20
int main()
{
    int arr[5], arr2[5], sum, m;
    // printf("Enter the number of elements of the array :");
    // scanf("%d", &m);
    printf("\n Enter the elements of the array :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sum = 0;
        for (int j = i; j >= 0; j--)
        {
            sum = sum + arr[j];
        }
        arr2[i] = sum;
        printf(" After running sum %dth element of the new array is --> %d\n", (i + 1), arr2[i]);
    }
    return 0;
}