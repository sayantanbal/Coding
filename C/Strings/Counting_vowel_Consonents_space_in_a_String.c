#include <stdio.h>
#include <string.h>
int main()
{
    int vowel = 0, sp = 0, con = 0, i, l;
    char n[30];
    printf("Enter the string :");
    gets(n);
    l = strlen(n);
    for (i = 0; i < l; i++)
    {
        switch (n[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            vowel++;
            break;
        case 32:
            sp++;
            break;
        default:
            con++;
        }
    }
    printf("The number of vowels are %d\n", vowel);
    printf("The number of spaces are %d\n", sp);
    printf("The number of consonents are %d\n", con);
    return 0;
}