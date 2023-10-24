#include<stdio.h>
void getCounting(int n){
    if (n==0)
    {
        return;
    }
    printf("%d\n", n);
    getCounting(n-1);
}
void main()
{
int n;
printf("Please enter the input:");
scanf("%d", &n);
printf("Counting-->\n");
getCounting(n);
}