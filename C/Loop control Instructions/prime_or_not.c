#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,prime=0;
printf("Enter the value of n :");
scanf("%d", &n);
for ( i = 2; i < n ; i++)
{
    if (n%i==0)
    {
        prime=1;
        break;
    }
   if (prime == 1)
   {
       printf("The number is composite\n");
   }
   else
   {
       printf("The number is prime\n");
   }
}

return 0;
}