#include<stdio.h>
int sum(int n){
    if (n==1)
    {
        return 1;
    }
    return n + sum(n-1);
}
void main()
{
int n, c;
printf("Enter the range:");
scanf("%d", &n);
c = sum(n);
printf("The sum of the numbers in the given range is %d", c);
}