#include <stdio.h>
#include <string.h>
int main()
{
    int i, l;
    char str[100];
    printf("Enter the sentence :");
    gets(str);
    l = strlen(str);
    str[0] = str[0] - 32;
    for (int i = 1; i < l; i++)
    {
        if (str[i] == ' ')
        {
            str[i + 1] = str[i + 1] - 32;
        }
    }
    printf("The new sentence is %s\n", str);
    return 0;
}