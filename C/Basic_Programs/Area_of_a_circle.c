//Calculate the area of a circle
#include<stdio.h>
#include<conio.h>
int main()
{
int radius;
float pi=3.14,area;
printf("Enter the radius :");
scanf("%d", &radius);
area=pi*radius*radius;
printf("The area of the circle is=%f" ,area);
return 0;
}