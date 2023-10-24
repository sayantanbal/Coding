#include <stdio.h>
int main()
{
    int Mr1[2][3], Mr2[2][3], sum_Mr[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the elements of the first matrix:");
            scanf("%d", &Mr1[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the elements of the second matrix:");
            scanf("%d", &Mr2[i][j]);
        }
    }
    printf("\nHere is the first matrix------>\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", Mr1[i][j]);
        }
        printf("\n");
    }
    printf("\nHere is the second matrix------>\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", Mr2[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum_Mr[i][j] = Mr1[i][j] + Mr2[i][j];
        }
    }
    printf("\nHere is the addition of two matrices----->\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", sum_Mr[i][j]);
        }
        printf("\n");
    }
    return 0;
}