#include <stdio.h>
int n = 1;
int mul(int a, int b)
{
    if (n == b)
    {
        return a;
    }
    else
    {
        n++;
        return a + mul(a, b);
    }
}
void main()
{
    int a, b, f;
    printf("ENter two numbers :");
    scanf("%d %d", &a, &b);
    f = mul(a, b);
    printf("The multiplication of two numbers is %d", f);
}