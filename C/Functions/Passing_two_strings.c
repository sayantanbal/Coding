#include<stdio.h>

void modify(char*, char*);
void main()
{
char str1[] = "Tuhin";
char str2[] = "ghosh";
modify(str1, str2);
}
void modify(char *str1, char *str2){
    int i, length = 0;
    for ( i = 0; str1[i]!='\0'; i++)
    {
        length = length + 1;
    }
    printf("The length of the first string is %d\n", length);
    str2[0] = 'G';
    printf("The modified second string is %s\n", str2);
}