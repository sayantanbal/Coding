#include<stdio.h>

void main()
{
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("QN_03_r.txt", "r");
    ptr2 = fopen("New.txt", "w");
    char c;
    c = fgetc(ptr1);
    while(c!=EOF)
    {
        fputc(c, ptr2);
        fputc(c, ptr2);
        c = fgetc(ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);
}