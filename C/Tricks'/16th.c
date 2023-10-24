#include <stdio.h>
int main()
{
    int x = 1, y = 1;
    y++;
    ++x;
    x = y++ + ++x;
    printf("\n%d %d", x, y);
    y = ++y + x++;
    printf("\n%d %d", x, y);
    return 0;
}