#include<stdio.h>
#include<stdlib.h>

void main()
{
    float *ptr;
    ptr =(float *) malloc(6 * sizeof(float));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %dth element:", (i+1));
        scanf("%f", &ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is: %f\n", (i+1), ptr[i]);
    }
    
}