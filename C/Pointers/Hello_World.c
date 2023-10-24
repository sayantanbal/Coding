#include<stdio.h>
#include<string.h>

void main()
{
char a[20];
char *p;
p = &a;
printf("Enter the string:");
gets(a);
printf("The string is %s", *p);
}   