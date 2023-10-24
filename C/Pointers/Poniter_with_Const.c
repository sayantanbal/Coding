#include<stdio.h>

int main()
{
const int a = -11;
const int *p = &a;
// int *p = &a; --> datatype must be same!
printf("%d\n", a);
// *p = 10; --> For the const variable we can not change the pointer!
printf("%d\n", a);
return 0;
}