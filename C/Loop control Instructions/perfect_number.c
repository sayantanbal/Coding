#include<stdio.h>
int main()
{
int n, i=1, p=0;
printf("Enter the integer :");
scanf("%d", &n);
while (i<=n/2)
{
    if (n%i==0)
    {
        p = p + i;
    }
    i++;
}
if (p==n)
{
    printf("The number is perfect!!");
}
else{
    printf("The number is not perfect!!");
}
return 0;
}