#include <stdio.h>
int main()
{
    int f, n = 50;
    int a[5]; // it will work
    // int a[-5]; ----> it will throw an error
    // int a[]; ---> This is wrong!!!
    int b[2 + 3];  // it will work
    int c[3 * 2];  // it will work
    int d[10 / 2]; // it will work
    int e[f = 10 / 2];
    int g[n];                   // MACROS!!!
    int x[5] = {2, 3, 5, 8, 9}; // remaining positions are filled with zero
    for (int i = 0; i < 5; i++)
    {
        printf("The values initialized of index %d in the array is %d\n", i, x[i]);
    }
    for (int i = 4; i >= 0; i--)
    {
        printf("The values initialized of index %d in the array in reverse order is %d\n", i, x[i]);
    }

    return 0;
}