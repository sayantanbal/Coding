#include<stdio.h>
int main()
{
int i=50;
printf("The address of the variable i is=%u\n", &i);
printf("The value of the variable i is=%d\n", *(&i));
return 0;
}