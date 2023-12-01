#include <stdio.h>
float average(int a, int b, int c)
{
    float result;
    result =(float)(a + b + c) / 3;
    return result;
}


int main()
{
    int a, b, c;
    float x;
    printf("Enter the first number :");
    scanf("%d", &a);
    printf("Enter the second number :");
    scanf("%d", &b);
    printf("Enter the third number :");
    scanf("%d", &c);
    x = average(a, b, c);
    printf("The average of three numbers is=%f", x);
    return 0;
}