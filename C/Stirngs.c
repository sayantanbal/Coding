#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    // char str1[5] = "Hello";
    // char str2[] = "World";
    // strcat does not check for buffer overflow. so here str1 is of size 5 and str2 is of size 6. so it will cause buffer overflow.
    // ! this may work even if buffer overflow occurs but it is not a good practice.
    // strcat(str1, str2);
    // printf("%s", str1);

    // now we will use strncat which will check for buffer overflow.

    // strncat will append the first n characters of the second string to the first string.

    char str3[5] = "Hello";
    char str4[] = "World";
    strncat(str3, str4, 2);
    printf("%s", str3);
    return 0;
}
