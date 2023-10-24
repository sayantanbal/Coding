#include<stdio.h>
#include<conio.h>
int main()
{
int sum=0, r, n, i;
printf("Enter the integer :");
scanf("%d", &n);
i=n;
while (n>0)
{
    r=n%10;
    sum += (r*r*r);
    n=n/10;
}
if (i == sum)
{
    printf("The number is an armstrong number!");
}
else{
    printf("The number is not an armstrong number!");
}
return 0;
}