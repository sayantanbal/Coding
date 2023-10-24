#include<stdio.h>
#pragma pack(1)
struct abc
{
    char a;
    int b;
    char c;
}s;

void main()
{
     printf("%d", sizeof(s));
}