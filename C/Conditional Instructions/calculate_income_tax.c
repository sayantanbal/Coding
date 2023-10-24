#include<stdio.h>
#include<conio.h>
int main()
{
float tax=0, income;
printf("Enter your income :");
scanf("%f", &income);
if(income>250000 && income<500000)
{
    tax= (income - 250000)*0.05;
}
if (income>= 500000 && income<= 1000000)
{
    tax= (income-250000)*0.20;
}
if(income>1000000)
{
    tax=(income-250000)*0.30;
}
   printf("your income tax is %f", tax);  
return 0; 
}