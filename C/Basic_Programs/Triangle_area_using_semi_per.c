#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int a, b, c, s, area;
    printf("Enter the first side of the triangle :");
    scanf("%d", &a);
    printf("Enter the second side of the triangle :");
    scanf("%d", &b);
    printf("Enter the third side of the triangle :");
    scanf("%d", &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of the triangle is=%d\n", area);
    return 0;
}