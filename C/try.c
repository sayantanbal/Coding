#include <stdio.h>
int main()
{
    int c, d = 0;
    int a = 1;
    int b = 1;
    c = a || --b;
    printf("a = % d, b = % d, c = % d, d = % d\n ", a, b, c, d);

    // printf("%d\n", 0||1);
    
    d= a-- && --b;
    printf("a = % d, b = % d, c = % d, d = % d\n ", a, b, c, d);
    return 0;
}