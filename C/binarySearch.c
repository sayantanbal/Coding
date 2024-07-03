#include <stdio.h>

// Function to perform bubble sort
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform binary search
int binarySearch(int arr[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // Check if key is present at mid
        if (arr[mid] == key)
            return mid;

        // If key greater, ignore left half
        if (arr[mid] < key)
            low = mid + 1;
        // If key is smaller, ignore right half
        else
            high = mid - 1;
    }

    // Key not found
    return -1;
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sort the array using bubble sort
    bubbleSort(arr, n);

    // Display the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int key;
    printf("Enter the number to search: ");
    scanf("%d", &key);

    // Perform binary search
    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}