#include<stdio.h>
#include<conio.h>
int main()
{
int i, n;
printf("Enter the value of n :");
scanf ("%d", &n);
for ( i = 10; i>=1; i--)
{
    printf("%d X %d = %d\n", n, i, i*n);
}
return 0;
}