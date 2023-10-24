#include <stdio.h>
#define N 50
int main()
{
    int Mr1[N][N], Mr2[N][N], mul_Mr[N][N], m, n, p, q, sum;
    printf("Enter the number of rows of the first matrix is :");
    scanf("%d", &m);
    printf("Enter the number of columns of the first matrix is :");
    scanf("%d", &n);
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the elements of the first matrix :");
            scanf("%d", &Mr1[i][j]);
        }
    }
    printf("\n");
    printf("Enter the number of rows of the second matrix is :");
    scanf("%d", &p);
    printf("Enter the number of columns of the second matrix is :");
    scanf("%d", &q);
    printf("\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("Enter the elements of the second matrix :");
            scanf("%d", &Mr2[i][j]);
        }
    }
    printf("\nHere is the first matrix ------->\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", Mr1[i][j]);
        }
        printf("\n");
    }
    printf("\nHere is the second matrix ------->\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d\t", Mr2[i][j]);
        }
        printf("\n");
    }
    if (n != p)
    {
        printf("\nWe can not multiply these two matrices");
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                sum = 0;
                for (int k = 0; k < m; k++)
                {
                    sum = sum + (Mr1[i][k] * Mr2[k][j]);
                }
                mul_Mr[i][j] = sum;
            }
        }
        printf("\nHere is the multiplication of two matrices--->\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d\t", mul_Mr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}