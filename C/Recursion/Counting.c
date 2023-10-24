#include<stdio.h>
void Count(int n){
    if (n==0)
    {
        return;
    }
    Count(n-1);
    printf("%d\n", n);
}
void main()
{
    int n;
printf("Enter n:");
scanf("%d", &n);
Count(n);
}