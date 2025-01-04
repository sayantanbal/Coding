// Given n disƟnct posiƟve integers (n > 2), write a program in C using recursive funcƟon to find their LCM (Lowest Common MulƟple)

#include<stdio.h>

int LCM(int arr[], int size){
    if (size == 1)
    {
        return arr[0];
    }
    else
    {
        
    }
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    LCM(arr[n], n);
    
    return 0;
}
