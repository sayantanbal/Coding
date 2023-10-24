#include<stdio.h>
void main()
{
float r, area;
printf("Enter the radius:");
scanf("%f", &r);
float *p;
p = &r;
area = 3.14*(*p)*(*p);
printf("The area of the circle is %.2f", area);
}