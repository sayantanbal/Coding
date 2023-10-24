#include<stdio.h>
struct vector
{
    int x;
    int y;
};

void main()
{
    struct vector v1, v2;
    v1.x = 20;
    v1.y = 30;
    v2.x = 40;
    v2.y = 50;
    printf("The x dim of v1 is %d and y dim of v1 is %d\n", v1.x, v1.y);
    printf("The x dim of v2 is %d and y dim of v2 is %d\n", v2.x, v2.y);
}