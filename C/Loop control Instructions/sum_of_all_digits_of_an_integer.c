#include<stdio.h>
#include<conio.h>
int main()
{
int n, i, sum=0;
printf("Enter the intrger :");
scanf("%d", &n);
// using while loop
while (n>0)
{
    i=n%10;
    sum= sum+i;
    n=n/10;
}
printf("Sum of all digits of the integer is %d", sum);
return 0;
}