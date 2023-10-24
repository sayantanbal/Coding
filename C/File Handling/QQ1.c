#include<stdio.h>

void main()
{
    FILE *ptr;
    int num1;
    int num2;
    ptr = fopen("abcd.txt", "r");
    if (ptr==NULL)
    {
        printf("File does not exist\n");
    }
    else{
    fscanf(ptr, "%d", &num1);
    fscanf(ptr, "%d", &num2);
    fclose(ptr);
    printf("The value of num is %d\n", num1);
    printf("The value of num is %d", num2);
    }
}