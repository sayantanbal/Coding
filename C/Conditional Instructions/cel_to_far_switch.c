#include <stdio.h>

void main()
{
    printf("Enter 1 to convert the temperature to Fahrenheit");
    printf("Enter 2 to convert the temperature to Centigrade\n");
    int ch;
    printf("Enter your choice:");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        float c, f;
        printf("Enter the temparature in centigrade:");
        scanf("%f", &c);
        f = ((9 * c) / 5) + 32;
        printf("The temparature in fahrenheit is %f", f);
        break;
    case 2:
        float c, f;
        printf("Enter the temparature in fahrenheit:");
        scanf("%f", &f);
        c = ((f - 32) / 9) * 5;
        printf("The temparature in centigrade is %f", c);
        break;

    default:
        printf("Please enter a valid choice");
        break;
    }
}