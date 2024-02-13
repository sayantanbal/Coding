#include <stdio.h>

void main()
{
    FILE *ptr;
    char c;
    ptr = fopen("getdemo.txt", "r");
    c = fgetc(ptr);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
}