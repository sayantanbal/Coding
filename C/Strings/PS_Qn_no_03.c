#include<stdio.h>
/*char strlen(char str[]){
    int i = 0;
    while (str[i]!='\0')
    {
        i++;
    }
    return i;
}*/
int strlen(char *str){
    char *ptr = str;
    int len = 0;
    while (*ptr!='\0')
    {
        len++;
        ptr++;
    }
    return len;
}
void main()
{
    char str[10];
    int l;
    printf("Enter the string:");
    gets(str);
    l = strlen(str);
    printf("The length of the string is %d", l);
}