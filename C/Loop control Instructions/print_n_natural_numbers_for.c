#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
printf("Enter the value of n :");
scanf("%d", &n);
for ( i=0; i<n; i++)
{
    printf("The numbers are %d\n", i+1);
}
return 0;
}