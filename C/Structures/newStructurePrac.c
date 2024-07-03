#include<stdio.h>
int main(int argc, char const *argv[])
{
    struct abc {
        int a;
        char b;
        float c;
    }x,y,z;

    struct abc s1;
    // s1.a = 10;
    // s1.b = 10;
    // s1.c = 10;
    printf("%d %d %f", s1.a, s1.b, s1.c); // if not declared for some reason the last o/p is -1.#QNAN0. ?
    return 0;
}
