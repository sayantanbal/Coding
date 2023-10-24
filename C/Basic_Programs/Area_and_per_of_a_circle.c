#include<stdio.h>
#include<conio.h>
int main()
{
int r, area, peremetre;
float pi=3.14;
printf("Enter the radius :");
scanf("%d" ,&r);
area=pi*r*r;
peremetre=2*pi*r;
printf("The area of the circle is=%d\n" ,area);
printf("The peremetre of the circle is=%d\n" ,peremetre);
return 0;
}