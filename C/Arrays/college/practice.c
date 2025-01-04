// Given a list of ‘n’ distinct positive integers in random order write a program in C, using array and function, to find and display the largest even and odd integer from the list.

#include <stdio.h>
void abc(int arr[], int n) // here we are passing the array.  int arr[] is the same as int *arr so it doesn't contain the whole array but the address of the first element of the array. since it is a pointer, it is of 8 bytes in size. so it is a must need to pass the size of the array as well.
{
    int max_even = 0;
    int max_odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (arr[i] > max_even)
            {
                max_even = arr[i];
            }
        }
        else
        {
            if (arr[i] > max_odd)
            {
                max_odd = arr[i];
            }
        }
        // printf("arr[i]: %d\n", arr[i]);
        // printf("max_even: %d\n", max_even);
        // printf("max_odd: %d\n", max_odd);
    }
    printf("The largest even number is: %d\n", max_even);
    printf("The largest odd number is: %d\n", max_odd);
}

int main(int argc, char const *argv[])
{
    printf("Enter the number of elements you want to store in array:");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    abc(arr, n);
    
    
    return 0;
}




