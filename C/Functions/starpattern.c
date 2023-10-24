#include<stdio.h>
void starPattern(int n);
int main()
{
int n;
printf("Enter the value of n :");
scanf("%d", &n);
starPattern(n);
return 0;
}

void starPattern(int n){
    if (n==1)
    {
        printf("*\n");
        return;
    }
    starPattern(n-1);
    for (int i = 0; i < (2*n - 1); i++)
    {
        printf("*");
    }
    printf("\n");
}