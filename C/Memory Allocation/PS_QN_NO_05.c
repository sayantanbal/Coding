#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *ptr;
    ptr = (int *) malloc (10*sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = 7*(i+1);
        printf("7 X %d = %d\n", (i+1), ptr[i]);
    }
    printf("\nThe new array----->\n");
    ptr =realloc (ptr , 15*sizeof(int));
    for (int i = 0; i < 15; i++)
    {
        ptr[i] = 7*(i+1);
        printf("7 X %d = %d\n", (i+1), ptr[i]);
    }
    
}