#include <stdio.h>
int a = 100;
int main()
{
    const int a = 5;
    int c;
    // a = 100; --> this will throw an error!!!
    printf("%d", a); // 
    return 0;
}