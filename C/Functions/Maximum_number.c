#include<stdio.h>
#include<stdlib.h>
int maximum (int, int, int);
void main()
{
int x, y, z, p;
printf("Enter x, y and z :");
scanf("%d %d %d", &x, &y, &z);
p = maximum(x, y, z);
printf("The maximum number is %d", p);
}
int maximum (int a, int b, int c){
    int max;
    if (a>b && b>c)
    {
        max = a;
    }
    else if (b>a && b>c)
    {
        max = b;
    }
    else
    {
        max = c;
    }
    return max;
}