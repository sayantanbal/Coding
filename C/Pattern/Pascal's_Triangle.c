//        1
//       1 1
//      1 2 1
//     1 3 3 1
//    1 4 6 4 1
#include<stdio.h>

void main()
{
int n, cof=1;
printf("Enter the number of rows:");
scanf("%d", &n);
for (int i = 0; i < n; i++)
{
    for (int sp = 1; sp <= n-i; sp++)
    {
        printf(" ");
    }
    for (int j = 0; j <=i; j++)
    {
        if (j==0 || i==0)
        {
            cof = 1;
        }
        else
        {
            cof = cof *(i-j+1)/j;
        }
        printf("%3d", cof);
    }
    printf("\n");
}

}