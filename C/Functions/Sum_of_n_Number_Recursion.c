#include<stdio.h>
int sum(int x){
    int s;
    if (x == 1)
    {
        return x;
    }
    s = x + sum(x-1);
    return s;
}
void main()
{
int a, n; 
printf("Enter the range:");
scanf("%d", &n);
a = sum(n);
printf("%d", a);
}