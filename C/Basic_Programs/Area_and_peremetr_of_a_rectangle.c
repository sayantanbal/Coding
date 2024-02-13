// Area and peremetre of a rectangle
#include <stdio.h>
#include <conio.h>
int main()
{
    int length, width, area, peremetre;
    printf("Enter the length of the rectangle :");
    scanf("%d", &length);
    printf("Enter the width of the rectangle :");
    scanf("%d", &width);
    area = length * width;
    peremetre = 2 * (length + width);
    printf("The Area of the rectangle is=%d\n", area);
    printf("The peremetre of the rectangle is=%d\n", peremetre);
    return 0;
}