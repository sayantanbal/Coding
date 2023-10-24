#include <stdio.h>

void main()
{
    int n, t_sum, w_sum = 0;
    printf("Enter the range:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        t_sum = 0;
        printf("(");
        for (int j = 1; j <= i; j++)
        {
            if(j==i)
            printf("%d", j);
            else
            printf("%d+", j);
            t_sum = t_sum + j;
        }
        printf(")");
        printf("+");
        w_sum = w_sum + t_sum;
    }
    printf("------>");
    printf("\nThe sum of the series is %d", w_sum);
}