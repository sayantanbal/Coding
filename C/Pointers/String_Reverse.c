#include<stdio.h>

void main()
{
char str[10], rev[10], *ptr;
int i = 0, k;
printf("Enter the string:");
gets(str);
while (str[i]!='\0')
{
    i++;
}
k = (i-1);
ptr = str;
for (int j = k; j >= 0; j--)
{
    rev[j] = *ptr;
    ptr++;
}
puts(rev);
}