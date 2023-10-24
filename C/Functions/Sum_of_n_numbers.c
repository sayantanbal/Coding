#include<stdio.h>
void Sum_n(){
    int n, sum=0;
    printf("Enter the range:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("1+2+3+4+5+......+n=%d", sum);
}
void main()
{
Sum_n();
}