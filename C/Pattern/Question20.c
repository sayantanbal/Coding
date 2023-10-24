//     A
//    ABC
//   ABCDE
//  ABCDEFG
// ABCDEFGHI
//  ABCDEFG
//   ABCDE
//    ABC
//     A
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= ((2 * i) - 1); k++)
        {
            printf("%c", 64+k);
        }
        printf("\n");
    }
    for (int i = (n - 1); i >= 1; i--)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i) - 1; k++)
        {
            printf("%c", 64+k);
        }
        printf("\n");
    }
    return 0;
}
