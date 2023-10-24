#include<stdio.h>
int fac(int n){
    int f=1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}
void main()
{
    int n, n1, r, t_fac, t_sum=0;
    printf("Enter the number:");
    scanf("%d", &n);
    n1 = n;
    while (n!=0)
    {
        r = n%10;
        t_fac = fac(r);
        t_sum += t_fac;
        n = n/10;
    }
    if (t_sum == n1)
        printf("The number is Krishnamurti number");
    else
        printf("The number is not Krishnamurti number");
    
}