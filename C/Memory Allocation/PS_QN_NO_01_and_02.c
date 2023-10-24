#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *ptr;
    ptr = (int *) malloc (6*sizeof(int));
    /*for (int i = 0; i < 6; i++)
    {
        printf("Enter the %dth element:", (i+1));
        scanf("%d", &ptr[i]);
    }*/
    for (int i = 0; i < 6; i++)
    {
        printf("The %dth element of the array is %d\n", (i+1), ptr[i]);
    }
    
}