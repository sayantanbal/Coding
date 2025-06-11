#include <stdio.h>
int main()
{
    int x = 4, y = 50;
    int z = 0;
    do{
        x += 8;
        z++;
        printf("%d\n", z);
        printf("%d\n", x);
        printf("%d\n", y);
    }while (x < y);
    return 0;
}
