#include <stdio.h>
#include <stdlib.h>
int main()
{
    // First way ----->
    int a[2][3] = {0, 0, 0, 1, 1, 1};
    // Second way ------>
    int b[2][3] = {{0, 0, 0}, {1, 1, 1}};
    // Third way ----->
    int c[3][3] = {
        {0, 0, 0},
        {1, 1, 1},
        {2, 2, 2}};
    // Fourth way ----->
    int d[][3] = {0, 0, 0, 1, 1, 1};
    // If you don't initialize a value of row or column it would be set by default two
    int f[2][3] = {0};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", f[i][j]);
        }
        // All set by default 0
    }
    int g[2][3] = {0, 0, 1, 1};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", g[i][j]);
        }
        // Other values are initialized by 0
    }
    int h[2][3] = {{0, 0}, {1, 1}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", h[i][j]);
        }
        // this will set the pair as two rows and the third value of the column is initialized by 0
    }
    int x[2][3] = {{0, 0, 0}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", x[i][j]);
        }
        // All are initialized by zero
    }

    return 0;
}