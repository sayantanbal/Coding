#include<stdio.h>

void main()
{
    int a;
    // a = 5, 4; --> 5
    // int a = 5, 4; --> it will throw an error!
    a = (5, 4); // --> 4
    printf("%d", a);
}