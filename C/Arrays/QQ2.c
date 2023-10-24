#include<stdio.h>

int main()
{
// Additon of a number to a pointer--->
int i = 50, j=60;
printf("The value of i is %d\n", i);
int *a = &i;
printf("The value of a is %u\n", a);
a++;
printf("The new value of a is %u\n", a);
// Subtraction of a number from a pointer--->
printf("The value of j is %d\n", j);
int *b= &j;
printf("The value of b is %u\n", b);
b--;
printf("The new value of b is %u\n", b);
// Subtraction of one pointer from another --->
int x = 30, y = 31, r;
int *ptr;
ptr = &x;
int *z = &y;
r = *z - *ptr;
printf("The size of an integer is %u\n", r);
return 0;
}