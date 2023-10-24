#include<stdio.h>
int main()
{
int a[2][3];
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("Enter the elemts of the matrix :");
        scanf("%d", &a[i][j]);
    } 
}
printf("\n\nHere is the actual matrix ----->\n\n");
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("%d\t", a[i][j]);
    }
  printf("\n");  
}
printf("\n\nNow here is the tranpose of the following matrix ----->\n\n");
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 2; j++)
    {
        printf("%d\t", a[j][i]);
    }
    printf("\n");
}

return 0;
}