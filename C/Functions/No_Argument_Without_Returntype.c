#include<stdio.h>
#include<stdlib.h>
void sum (void);
void sub (void);
void mul (void);
void Div (void);
void main()
{
 sum ();
 sub ();
 mul ();
 Div ();
}
void sum (){
    int a, b, sum;
    printf("Enter two numbers :");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("The sum of two numbers is %d\n", sum);
}
void sub (){
    int a, b, sub;
    printf("Enter greater number :");
    scanf("%d", &a);
    printf("Enter smaller number :");
    scanf("%d", &b);
    sub = a - b;
    printf("The subtraction of two numbers is %d\n", sub);
}
void mul (){
    int a, b, mul;
    printf("Enter two numbers :");
    scanf("%d %d", &a, &b);
    mul = a * b;
    printf("The multiplication of two numbers is %d\n", mul);
}
void Div (){
    int a, b;
    float result;
    printf("Enter the dividend :");
    scanf("%d", &a);
    printf("Enter the divisor :");
    scanf("%d", &b);
    result = a / b;
    printf("The division of two numbers is %f\n", result);
}