#include<stdio.h>

int main()
{
char s[50];
printf("Enter your name :");
// scanf("%4s", s);// only accept four characters
// scanf("%s", s);
gets(s);// --> now it can print multiword strings
puts(s);// place the cursor in next line after print the string
printf("Your name is %s\n", s);
return 0;
}