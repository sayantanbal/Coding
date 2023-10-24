#include<stdio.h>
int fac(int);
void main()
{
int n, c;
printf("Enter the number :");
scanf("%d", &n);
c = fac(n);
printf("The factorial of the given number is %d", c);
}
int fac(int a){
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    return fact;
}