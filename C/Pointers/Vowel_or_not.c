#include<stdio.h>

void main()
{
char c;
printf("Enter the character:");
scanf("%c", &c);
char *p;
p = &c;
switch (*p)
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
            printf("This is vowel");
            break;
        default:
            printf("This is not vowel");
        }
}