#include<stdio.h>

int main()
{
int a = 10;
int *ptr;
ptr = &a;

int d = 10, *ptr4 = &d;


float b = 5.6;
int *ptr2 = &b; // this is not correct!

// int *ptr3 = &c, c = 5; --> This will throw an error!
return 0;
}