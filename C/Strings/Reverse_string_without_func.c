#include <stdio.h>
#include <string.h>
int main()
{
    int l, d, r;
    char str[100];
    printf("Enter the string :");
    gets(str);
    l = strlen(str);
    d = l - 1;
    for (int i = 0; i < l / 2; i++)
    {
        r = str[d];
        str[d] = str[i];
        str[i] = r;
        d--;
    }
    printf("The reversed string is %s", str);
    return 0;
}