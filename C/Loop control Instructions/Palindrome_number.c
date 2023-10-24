#include<stdio.h>
int main()
{
int n, i, rev=0;
printf("Enter the integer :");
scanf("%d", &n);
int n1=n;
while (n>0)
{
   i=n%10;
   rev=(rev*10)+i;
   n=n/10; 
}
if (rev == n1)
{
    printf("The number is a palindrome number");
}
else
{
    printf("The number is not a palindrome number");
}
return 0;
}