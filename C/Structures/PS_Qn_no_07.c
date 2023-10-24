#include<stdio.h>
typedef struct num1
{
    int a;
    char b;
    float c;
}n1;
typedef struct num2
{
    int a;
    char b;
    float c;
}n2;
typedef struct num3
{
    int a;
    char b;
    float c;
}n3;
typedef struct num4
{
    int a;
    char b;
    float c;
}n4;
typedef struct num5
{
    int a;
    char b;
    float c;
}n5;

void main()
{
    n1 s1 = {12, 'r', 65.009};
    n2 s2 = {74, 'g', 89.37};
    n3 s3 = {92, 'q', 35.9356};
    n4 s4 = {25, 'e', 24.3638};
    n5 s5 = {42, 'g', 98.345};

    printf("%d %c %f\n", s1.a, s1.b, s1.c);
    printf("%d %c %f\n", s2.a, s2.b, s2.c);
    printf("%d %c %f\n", s3.a, s3.b, s3.c);
    printf("%d %c %f\n", s4.a, s4.b, s4.c);
    printf("%d %c %f\n", s5.a, s5.b, s5.c);
}