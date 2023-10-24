#include <stdio.h>
#define N 50
int main()
{
    int Mr1[N][N], Mr2[N][N], sum_Mr[N][N], m, n, p, q;
    printf("Enter the number of rows of the first matrix :");
    scanf("%d", &m);
    printf("Enter the number of columns of the first matrix :");
    scanf("%d", &n);
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the elements of the first matrix:");
            scanf("%d", &Mr1[i][j]);
        }
    }
    printf("\n");
    printf("Enter the number of rows of the second matrix :");
    scanf("%d", &p);
    printf("Enter the number of columns of the second matrix :");
    scanf("%d", &q);
    printf("\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("Enter the elements of the second matrix:");
            scanf("%d", &Mr2[i][j]);
        }
    }
    printf("\nHere is the first matrix------>\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", Mr1[i][j]);
        }
        printf("\n");
    }
    printf("\nHere is the second matrix------>\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d\t", Mr2[i][j]);
        }
        printf("\n");
    }
    if (m == p && n == q)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                sum_Mr[i][j] = Mr1[i][j] + Mr2[i][j];
            }
        }
        printf("\nHere is the addition of two matrices----->\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d\t", sum_Mr[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix addition is not possible !!!");
    }
    return 0;
}