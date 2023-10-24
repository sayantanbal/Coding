#include<stdio.h>
#define PI 3.14159
void main()
{
    int r;
    printf("Enter the value of radius:");
    scanf("%d", &r);
    printf("Area of the circle is %f", PI*r*r);
}