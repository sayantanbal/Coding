#include<stdio.h>

int min(int x, int y){
    if(x >= y)
        return y;
    else
        return x;
}

void main()
{
    int n; 
    printf("Enter the value of n:");
    scanf("%d", &n);
    int a, b;

    for (int i = 1; i <= 2*n-1; i++)
    {
        for (int j = 1; j <= 2*n-1; j++)
        {
            a = i;
            if (a>n) {a = 2*n - i;}
            b = j;
            if (b>n) {b = 2*n - j;}

            printf("%d ", (n+1)-min(a, b));
        }
        printf("\n");
    }
}