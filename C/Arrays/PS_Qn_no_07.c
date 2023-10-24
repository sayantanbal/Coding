#include <stdio.h>
void printTable(int *mulTable, int num, int n)
{
    printf("The multiplication table of %d is :\n", num);
    for (int i = 0; i < n; i++)
    {
        mulTable[i] = num * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", num, i + 1, mulTable[i]);
    }
    printf("************************************************\n");
}
int main()
{
    int mulTable[3][10];
    printTable(mulTable[0], 2, 10);
    printTable(mulTable[1], 7, 10);
    printTable(mulTable[2], 9, 10);
    // int mul[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     mulTable[0][i] = 2*(i+1);
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("2 X %d = %d\n", i+1, mulTable[0][i]);
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     mulTable[0][i] = 7*(i+1);
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("7 X %d = %d\n", i+1, mulTable[0][i]);
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     mulTable[0][i] = 9*(i+1);
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("9 X %d = %d\n", i+1, mulTable[0][i]);
    // }
    return 0;
}