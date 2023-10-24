#include <stdio.h>
#include <string.h>
int main()
{

    char str1[30] = "Tuhin";
    char str2[10] = "Ghosh";
    strcat(str1, str2);
    // strncat(str1, str2, 4); --> it will take four characters from str2!
    printf("\n After concatenate the string is %s", str1);
    return 0;
}