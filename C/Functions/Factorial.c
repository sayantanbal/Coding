#include<stdio.h>
#include<stdlib.h>
int fact(int);
void main()
{
int x, c;
printf("Enter a number :");
scanf("%d", &x);
c = fact(x);
printf("The factorial is %d", c);
}
int fact (int a){
    int fac = 1;
    for (int i = 1; i <= a; i++)
    {
        fac = fac * i;
    }
    return fac;
}