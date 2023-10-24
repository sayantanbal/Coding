#include<stdio.h>
#include<string.h>
int main()
{
int l;
char name [20];
printf("Enter your name :");
gets(name);
l = strlen(name);
printf("The lenghth of the string is %d", l);
return 0;
}