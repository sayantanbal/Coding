#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *ptr, n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    printf("Enter the values:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    printf("Enter the updated video of n:");
    scanf("%d", &n);
    int *ptr1 = (int *)realloc(ptr, n * sizeof(int));
    printf("Previous address = %d\n", ptr);
    printf("New address = %d\n", ptr1);
    printf("Updated values are:");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr1 + i));
    }
    free(ptr1);
}