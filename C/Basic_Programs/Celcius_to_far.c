// Temparature conversion cel to far
#include <stdio.h>
#include <conio.h>
int main()
{
    float celcius, far;
    printf("Enter the temperature in celcius :");
    scanf("%f", &celcius);
    far = (celcius * 9 / 5) + 32;
    printf("The Result is=%f", far);
    return 0;
}