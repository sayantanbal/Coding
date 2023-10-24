#include<stdio.h>
#include<conio.h>
int main()
{
int a, b, c, p;
printf("Enter the first integer :");
scanf("%d", &a);
printf("Enter the second integer :");
scanf("%d", &b);
printf("Enter the third integer :");
scanf("%d", &c);
printf("Enter the fourth integer :");
scanf("%d", &p);
if (a>b && a>c && a>p)
{
    printf("The greatest integer is %d" ,a);
}
else if (b>a && b>c && b>p)
{
    printf("The greatest integer is %d", b);
}
else if (c>a && c>b && c>p)
{
    printf("The greatest integer is %d", c);
}
else if (p>a && p>b && p>c)
{
    printf("The greatest integer is %d", p);
}
else
{
    printf("The program is not valid");
}
return 0;
}