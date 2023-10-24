#include <stdio.h>

int main()
{
    int mat[4][4], sum1 = 0, sum2 = 0, Ans;
    printf("Enter the Elements of the matrix:");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nHere is the matrix ----->\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == 0 || j == 0 || i == 3 || j == 3)
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