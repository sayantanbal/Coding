#include<stdio.h>
float temp(float cel);
int main()
{
    float cel,far;
    printf("Enter the temparature in celsius :");
    scanf("%f", &cel);
    far = temp (cel);
    printf("The value of the temperature in fahrenheit is %f", far);
return 0;
}

float temp(float cel){
    float far;
    far=((9*cel)/5)+32;
    return far;
}