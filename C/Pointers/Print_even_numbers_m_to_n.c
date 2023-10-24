#include <stdio.h>

void main()
{
    int m, n;
    printf("Enter the starting interval:");
    scanf("%d", &m);
    printf("Enter the closing interval:");
    scanf("%d", &n);
    int *p, *q;
    p = &m;
    q = &n;
    for (int i = *p; i <= *q; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
}