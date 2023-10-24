#include <stdio.h>
#include <string.h>
int main()
{
    int l1, l2;
    char str1[30];
    char str2[6];
    printf("Enter the first string :");
    gets(str1);
    printf("Enter the second string :");
    gets(str2);
    l1 = strlen(str1);
    l2 = strlen(str2);
    for (int i = 0; i <= l2; i++)
    {
        str1[l1 + i] = str2[i];
    }
    printf("The new string is %s", str1);
    return 0;
}