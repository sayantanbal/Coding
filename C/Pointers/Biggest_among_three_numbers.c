#include<stdio.h>

void main()
{
int a, b, c, max;
printf("Enter three numbers:");
scanf("%d %d %d", &a, &b, &c);
int *p, *q, *r;
p = &a;
q = &b;
r = &c;
if (*p>*q && *p>*r)
{
    max = *p;
}
else if (*q>*p && *q>*r)
{
    max = *q;
}
else
{
    max = *r;
}
printf("%d is the biggest number", max);
}