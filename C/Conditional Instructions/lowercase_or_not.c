#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    printf("Enter the character :");
    scanf("%c", ch);
    if (ch >= 97 && ch <= 122)
    {
        printf("The character is lower case");
    }
    else
    {
        printf("The character is not lower case");
    }
    return 0;
}