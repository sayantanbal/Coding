#include <stdio.h>
#include <conio.h>
int main()
{
    int r, h, vol;
    float pi = 3.14;
    printf("Enter the radius :");
    scanf("%d", &r);
    printf("Enter the height :");
    scanf("%d", &h);
    vol = pi * r * r * h;
    printf("The volume of the cylinder is=%d\n", vol);
    return 0;
}