#include<stdio.h>
#include<conio.h>
int main()
{
int n, i, rev=0;
printf("Enter the integer :");
scanf("%d", &n);
while (n>0)
{
   i=n%10;
   rev=(rev*10)+i;
   n=n/10; 
}
printf("The reverse number is %d\n", rev);
return 0;
}