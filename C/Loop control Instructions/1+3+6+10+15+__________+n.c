#include<stdio.h>
int main()
{
int n, term=0, sum=0;
printf("Enter the range :");
scanf("%d", &n);
for (int i = 1; i <= n; i++)
{
    term = term + i;
    sum = sum + term;
    printf("%d+ ", term);
}
printf("\nThe sum of the series is %d", sum);
return 0;
}