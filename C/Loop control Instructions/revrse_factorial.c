#include<stdio.h>
#include<conio.h>
int main()
{
int n, fac=1;
printf("Enter the range :");
scanf("%d", &n);
for (int i = n; i >= 1; i--)
{
    fac= fac*i;
    printf("%d * %d = %d\n", fac,i,fac);
}
printf("The reverse factorial of given number is=%d\n", fac);
return 0;
}