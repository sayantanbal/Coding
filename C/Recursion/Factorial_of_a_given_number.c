#include<stdio.h>
int fac(int n){
    if (n==1)
    {
        return 1;
    }
    return n*fac(n-1);
}
void main()
{
int n, c;
printf("Enter the number:");
scanf("%d", &n);
c = fac(n);
printf("%d", c);
}