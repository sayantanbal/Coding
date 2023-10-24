#include<stdio.h>
#include<stdlib.h>
void pattern();
void main()
{
pattern();
}
void pattern(){
    int n;
    printf("Enter the range :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}