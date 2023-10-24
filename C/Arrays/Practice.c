#include <stdio.h>
#define N 50

// Creating Array
void createArray(int arr[], int n)
{
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

// Sorting array
void sort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void main()
{
    int arr[N];
    int size;
    printf("Enter the number of elements you want to store in array:");
    scanf("%d", &size);

    createArray(arr, size);
    sort(arr, size);

    printf("The first highest element of this array is: %d\n", arr[size - 1]);
    printf("The second highest element of this array is: %d\n", arr[size - 2]);
    printf("The third highest element of this array is: %d\n", arr[size - 3]);
}