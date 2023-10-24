#include<stdio.h>
#include<conio.h>
int main()
{
int i, n, sum=0;
printf("Enter the value of n :");
scanf("%d", &n);
for ( i = 1; i <= 10; i++)
{
    printf("% X %d = %d\n", n, i, n*i);
    sum+=(n*i);
}
    printf("\nThe sum of the occuring values is =%d", sum);
return 0;
}