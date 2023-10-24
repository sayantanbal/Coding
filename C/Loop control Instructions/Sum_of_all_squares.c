#include<stdio.h>
#include<conio.h>
int main()
{
int n ,sum=0;
printf("Enter the range :");
scanf("%d", &n);
for (int i = 1; i <= n; i++)
{
    sum= sum + i*i;
}
printf("The sum of all squares is=%d\n", sum);
return 0;
}