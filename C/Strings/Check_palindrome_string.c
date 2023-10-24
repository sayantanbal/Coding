#include <stdio.h>
#include <string.h>
int main()
{
    int d, l, fl;
    char str[100];
    printf("Enter the string :");
    gets(str);
    l = strlen(str);
    d = l - 1;
    l--;
    for (int i = 0; i < l / 2; i++)
    {
        if (str[i] == str[d])
        {
            fl = 1;
            d--;
        }
        else
        {
            printf("The string is not palindrome!!!");
            fl=0;
            break;
        }
    }
    if (fl == 1)
    {
        printf("The string is palindrome!!!");
    }
    return 0;
}