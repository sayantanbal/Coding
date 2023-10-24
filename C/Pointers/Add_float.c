#include<stdio.h>

void main()
{
float a, b;
printf("Enter two floating numbers:");
scanf("%f %f", &a, &b);
float *p;
float *q;
p = &a;
q = &b;
printf("The addition of two numbers is %.2f", ((*p)+(*q)));
}