#include <stdio.h>
#define N 100
int main()
{
    int mat[N][N], sum1 = 0, sum2 = 0, Ans, m, n;
    printf("Enter the number of rows of the matrix :");
    scanf("%d", &m);
    printf("\nEnter the number of columns of the matrix :");
    scanf("%d", &n);
    printf("Enter the Elements of the matrix:");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nHere is the matrix ----->\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == (m-1) || j == (n-1))
            {
                sum1 = sum1 + mat[i][j];
            }
            else
            {
                sum2 = sum2 + mat[i][j];
            }
        }
    }
    printf("The sum of the border elemnts is %d\n", sum1);    
    printf("The sum of the middle elements is %d\n", sum2);
    Ans = sum1 - sum2;
    printf("The answer is %d", Ans);
    return 0;
}
