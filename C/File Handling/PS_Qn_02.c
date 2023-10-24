#include<stdio.h>

void main()
{
    int n; 
    printf("Enter the number of multiplication table:");
    scanf("%d", &n);
    FILE *ptr;
    ptr = fopen("Table.txt", "w");
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d X %d = %d\n", n, i, (n*i));
    }
    fclose(ptr);
    printf("The multiplication table of %d is successfully generated in Table.txt", n);
}