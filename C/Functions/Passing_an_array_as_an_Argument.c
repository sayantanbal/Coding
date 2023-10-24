#include <stdio.h>
#include <stdlib.h>
int avg(int[], int);
void main()
{
    int marks[5] = {10, 15, 20, 30, 45};
    printf("%d\n", sizeof(marks));
    float f;
    f = avg(marks, 5);
    printf("The average of the marks is %f\n", f);
}
int avg(int marks[], int a)
{
    printf("%d\n", sizeof(marks)); // it throws a warning cause in this fn it acts like a pointer!
    int sum;
    float avg;
    for (int i = 0; i < a; i++)
    {
        sum = sum + marks[i];
    }
    avg = sum / a;
    return avg;
}