#include<stdio.h>
#define N 100
void main()
{
int a[N], m;
printf("Enter the number of elements you want to store in the array:");
scanf("%d", &m);
printf("Enter the elements of the array:");
for (int i = 0; i < m; i++)
{
    scanf("%d", &a[i]);
}
int *p;
p = &a[0];
printf("The elements of the array ---->\n");
for (int i = 0; i < m; i++)
{
    printf("%d\n", (*(p+i))++);
}

}