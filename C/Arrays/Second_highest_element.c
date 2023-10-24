#include<stdio.h>
#include<limits.h>
#define N 50

int max(int x, int y){
    if(x>y) return x;
    else return y;
}

void main()
{
    int arr[N];
    int n;
    int highest = INT_MIN;
    int SecHighest = INT_MIN;
    printf("Enter the number of elements you want to store in the array:");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // Process to find highest:
    for (int i = 0; i < n; i++)
    {
        highest =max(arr[i],highest); 
    }
    // Process to find second highest:
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != highest)
            SecHighest = max(arr[i],SecHighest);
    }
    
    printf("The second highest element is %d\n", SecHighest);
}