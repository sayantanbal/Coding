#include<stdio.h>
#include<stdlib.h>
int sum (int, int, int);
void main()
{
int x, y, z, c;
printf("Enter x :");
scanf("%d", &x);
printf("Enter y :");
scanf("%d", &y);
printf("Enter z :");
scanf("%d", &z);
c = sum(x, y, z);
printf("Sum of three numbers is %d", c);
}
int sum(int a, int b, int c){
    return a+b+c;
}