#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n;
    int *ptr;
    printf("Enter the number of elements you want to store:");
    scanf("%d", &n);
    ptr = (int*) calloc (n , sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element:", (i+1));
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The %dth element is %d\n", (i+1), ptr[i]);
    }
    
}