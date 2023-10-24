// ***** 
// ***** 
// ***** 
// *****
// ***** 
#include<stdio.h>
#include<conio.h>
int main()
{
int n, p;
printf("Enter the number of stars in a line :");
scanf("%d", &n);
printf("Enter the number of lines :");
scanf("%d", &p);
for (int i = 1; i <= p; i++)
{
    for (int j = 1; j <= n; j++)
    {
        printf("* ");
    }
    printf("\n");
}

return 0;
}
