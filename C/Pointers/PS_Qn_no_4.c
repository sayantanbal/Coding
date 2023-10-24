#include <stdio.h>
void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}
int main()
{
    int a, b, sum;
    float avg;
    a = 3;
    b = 6;
    sumAndAvg(a, b, &sum, &avg);
    printf("The sum of two given numbers is=%d\n", sum);
    printf("The average of two given numbers is=%f\n", avg);
    return 0;
}