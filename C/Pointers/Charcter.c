#include<stdio.h>

void main()
{
char a;
printf("Enter a character:");
scanf("%c", &a);
char *p;
p = &a;
printf("The character is %c\n", *p);
printf("The ASCII value is %d\n", *p);
printf("The Uppercase Character is %c\n", (*p-32));
}