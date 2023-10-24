#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *ptr, *ptr2;
    ptr =(int *) malloc(600 * sizeof(int));
    for (int i = 0; i < 600; i++)
    {
        ptr2 =(int *) malloc(6 * sizeof(int));
        printf("Enter the value of %dth element:", (i+1));
        scanf("%d", &ptr[i]);
        free(ptr2);// It will not consume more memory!!
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }
    
}