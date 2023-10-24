#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *ptr;
    ptr =(int *) malloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %dth element:", (i+1));
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }
    
}