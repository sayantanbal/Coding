/* I
   IN
   IND
   INDI
   INDIA */

#include <stdio.h>
#include <string.h>
int main()
{
    int l;
    char str[100];
    printf("Enter the string :");
    gets(str);
    l = strlen(str);
    for (int i = 1; i <= l; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    return 0;
}