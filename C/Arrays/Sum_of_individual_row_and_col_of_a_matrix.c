#include <stdio.h>
int main()
{
    int a[3][3], Row_sum, Col_sum;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the elemts of the matrix :");
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\n Here is the following matrix ------> \n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n Here is the individual sum of all rows and columns of the following matrix --->\n\n");
    for (int i = 0; i < 3; i++)
    {
        Row_sum = 0, Col_sum = 0;
        for (int j = 0; j < 3; j++)
        {
            Row_sum = Row_sum + a[i][j];
            Col_sum = Col_sum + a[j][i];
        }
        printf("The sum of %dth row of the following matrix is %d\n", (i + 1), Row_sum);
        printf("The sum of %dth column of the following matrix is %d\n", (i + 1), Col_sum);
    }

    return 0;
}