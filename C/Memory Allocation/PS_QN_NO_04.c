#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *ptr;
    ptr = (int *) malloc (5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %dth element of the array:", (i+1));
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The %dth element of the array is %d\n", (i+1), ptr[i]);
    }
    // Reinitialise using realloc()
    
    ptr = realloc (ptr, 10*sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the %dth element of the array:", (i+1));
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The %dth element of the array is %d\n", (i+1), ptr[i]);
    }
}