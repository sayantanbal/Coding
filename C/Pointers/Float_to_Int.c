#include<stdio.h>

void main()
{
float a;
printf("Enter the number:");
scanf("%f", &a);
float *p;
p = &a;
int c;
c = (*p)/1;
printf("After converting to integer the number is %d", c);
}