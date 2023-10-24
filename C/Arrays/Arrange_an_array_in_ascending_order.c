#include<stdio.h>
#define N 20
int main()
{
int arr[N], temp, m;
printf("Enter the size of the array:");
scanf("%d", &m);
printf("\n Enter the elements of the array :");
for (int i = 0; i < m; i++)
{
    scanf("%d", &arr[i]);
}
for (int i = 0; i < m; i++)
{
    for (int j = i+1; j < m; j++)
    {
        if (arr[i]>arr[j]) 
        // in case of descending order we use <
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        
    }
    
}
printf("The elements of the new array :");
for (int i = 0; i < m; i++)
{
    printf("%d", arr[i]);
}
return 0;
}