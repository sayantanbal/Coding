#include<stdio.h>

int main()
{
char name[3];
// gets(name); // Buffer Overflow
printf("Enter your name :");
scanf("%s", name);
printf("%s", name);
return 0;
}