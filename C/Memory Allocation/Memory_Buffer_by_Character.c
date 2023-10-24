#include<stdio.h>

void main()
{
int a;
char b;
printf("Enter the number:");
scanf("%d", &a);
fflush(stdin);
printf("Enter the character:");
scanf("%c", &b);
printf("%d %c", a, b);
}