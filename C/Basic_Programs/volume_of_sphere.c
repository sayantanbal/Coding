#include <stdio.h>
#include <conio.h>
int main()
{
    int r;
    float pi = 3.14, vol;
    printf("Enter the radius of the sphere :");
    scanf("%d", &r);
    vol = (1.33) * pi * r * r * r;
    printf("The volume of the sphere is=%f", vol);
    return 0;
}