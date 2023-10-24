#include<stdio.h>

int main()
{
int n;
char str[] = "Tuhin";
printf("How many times you want to print the string :");
scanf("%d", &n);
for (int i = 0; i < n; i++)
{
    printf("The created string is %s\n", str);
}
return 0;
}