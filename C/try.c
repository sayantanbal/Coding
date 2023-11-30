// a program to add n terms of an arithmetic progression

#include <stdio.h>


int main()
{
    int n, a, d, i, sum = 0;
    printf("Enter the number of terms in AP: ");
    scanf("%d", &n);
    printf("Enter the first term: ");
    scanf("%d", &a);
    printf("Enter the common difference: ");
    scanf("%d", &d);
    for (i = 0; i < n; i++)
    {
        sum += a;
        a += d;
    }
    printf("Sum of %d terms of AP is %d\n", n, sum);
    return 0;
}