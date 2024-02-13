// Simple interest
#include <stdio.h>
#include <conio.h>
int main()
{
    float p, r, t, interest;
    printf("Enter the capital :");
    scanf("%f", &p);
    printf("Enter the rate of interest :");
    scanf("%f", &r);
    printf("Enter the time period in year:");
    scanf("%f", &t);
    interest = (p * t * r) / 100;
    printf("The result is =%f", interest);
    return 0;
}