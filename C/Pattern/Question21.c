// 567898765
// 4567654
// 34543
// 232
// 1
#include<stdio.h>

void main()
{
int n, i, j, k;
printf("Enter the number of lines:");
scanf("%d", &n);

for (i = n; i >= 1; i--)
{
    for (j = i; j <= (2*i)-1; j++)
    {
        printf("%d\t", j);
    }
    for (k = (j-2); k >= i; k--)
    {
        printf("%d\t", k);
    }
    printf("\n");   
}
}