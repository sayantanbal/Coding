#include<stdio.h>

int main()
{
char name [10];
printf("Enter the string :");
// scanf("%s", name);
// scanf("%s", &name);// This is also true!!!
gets(name);// Use to initialize multiword strings. 
printf("%s", name);
puts(name); // Print a new line

char name2[50];
printf("Enter the name :");
// scanf("%s", name);
scanf("%4s", name);// It will accept four characters
// printf("%s\n", name);
printf("%.3s\n", name);
printf("%10.5s\n", name);
printf("%s\n", &name);
printf("%s\n", &name[2]);
// printf("%s\n", name[2]);// It doesn't work!
puts(name);
return 0;
}