#include<stdio.h>

void main()
{
int arr[10], max=0;
int *ptr;
ptr = arr;
printf("Enter the elements of the array:");
for (int i = 0; i < 10; i++)
{
    scanf("%d", &arr[i]);
}

for (int i = 0; i < 10; i++)
{
    if (*ptr > max)
    {
        max = *ptr;
        ptr++;
    }
    
}
printf("The highest value in the array is %d", max);
}