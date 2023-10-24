#include <stdio.h>

int main()
{
    int marks[5], sum = 0;
    float avg;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the number of %dth student :", (i+1));
        scanf("%d", &marks[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        sum = sum + marks[j];
    }
    avg = sum / 5;
    printf("The sum of the marks of all students is %d\n", sum);
    printf("The avg of the marks of all students is %f\n", avg);
    return 0;
}