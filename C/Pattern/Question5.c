// *****
// ****
// ***
// **
// *
#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("Enter the range :");
scanf("%d", &n);
// First process--->
for (int i = n; i >= 1; i--)
{
    for (int j = 1; j <= i; j++)
    {
        printf("*");
    }
    printf("\n");
}
// second process----->
// for (int i = 1; i <= n; i++)
// {
//     for (int j = n; j >= i; j--)
//     {
//         printf("*");
//     }
//     printf("\n");
// }
// third process ---->
// for (int i = n; i >= 1; i--)
// {
//     for (int j = i; j >= 1; j--)
//     {
//         printf("*");
//     }
//     printf("\n");
// }
return 0;
}