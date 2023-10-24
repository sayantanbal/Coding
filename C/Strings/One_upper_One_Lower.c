#include <stdio.h>
#include <string.h>
int main()
{
    int l, sp = 2, x = 0;
    char str[30];
    printf("Enter the string :");
    gets(str);
    l = strlen(str);
    while (str[x] != 32)
    {
        if (str[x] >= 97 && str[x] <= 122)
        {
            str[x] = str[x] - 32;
        }
    }

    for (int i = 0; i < l; i++)
    {
        if (str[i] == 32)
        {
            if (sp % 2 == 0)
            {
                while (str[i] == 32)
                {
                    for (int j = 0; str[j] != 32; j++)
                    {
                        if (str[j] >= 65 && str[j] <= 90)
                        {
                            str[j] = str[j] + 32;
                        }
                    }
                }
                sp++;
            }
            else
            {
                while (str[i] == 32)
                {
                    for (int k = 0; str[k] != 32; k++)
                    {
                        if (str[k] >= 97 && str[k] <= 122)
                        {
                            str[k] = str[k] - 32;
                        }
                    }
                }
                sp++;
            }
        }
    }
    printf("The new string is---> %s", str);
    return 0;
}