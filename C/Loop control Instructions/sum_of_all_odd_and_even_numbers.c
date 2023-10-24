#include<stdio.h>
int main()
{
int n, esum=0, osum=0;
printf("Enter the range :");
scanf("%d", &n);
for (int i = 1; i <= n; i++)
{
    if (i%2 == 0)
    {
        esum= esum+i;
    }
    else
    {
        osum= osum+i;
    }
}
printf("The sum of all even numbers in the given range is=%d\n", esum);
printf("The sum of all odd numbers in the given range is=%d\n", osum);
return 0;
}