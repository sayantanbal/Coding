#include<stdio.h>
#include<string.h>
int main()
{
char str[50] = "TuHin";
strlwr(str);
printf("%s\n", str);
strupr(str);
printf("%s", str);
return 0;
}