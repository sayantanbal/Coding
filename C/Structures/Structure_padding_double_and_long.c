#include<stdio.h>
// #pragma pack(1)
struct ab
{
    double a;
    long int b;
}s;

void main()
{
    long int c;
    printf("%d\n", sizeof(c));
    printf("%d", sizeof(s));
    //double=(4+4) and long=(4+4) so the total size is 16!
}