#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    FILE *fp = NULL;
    int a = 10;
    char ch = 's';
    char str[50];
    fp = fopen("abc.txt", "w");

    if (fp == NULL)
    {
        printf("Error!");
        exit(1);
    }

    printf("Enter the string:");
    gets(str);

    /*for (int i = 0; i != strlen(str); i++)
    {
        fputc(str[i], fp);
    }*/
    fprintf(fp, "%d %s %c", a, str, ch);
    // fputs(str, fp);
    fclose(fp);
}