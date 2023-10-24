#include <stdio.h>
typedef struct time
{
    int hour;
    int min;
    int sec;
} time;
int timeCmp(time t1, time t2)
{
    if (t1.hour > t2.hour)
    {
        return 1;
    }
    if (t1.hour < t2.hour)
    {
        return -1;
    }
    if (t1.min > t2.min)
    {
        return 1;
    }
    if (t1.min < t2.min)
    {
        return -1;
    }
    if (t1.sec > t2.sec)
    {
        return 1;
    }
    if (t1.sec < t2.sec)
    {
        return -1;
    }
    return 0;
}
void main()
{
    time t1, t2;
    printf("Enter the hour of t1:");
    scanf("%d", &t1.hour);
    printf("Enter the minute of t1:");
    scanf("%d", &t1.min);
    printf("Enter the second of t1:");
    scanf("%d", &t1.sec);

    printf("Enter the hour of t2:");
    scanf("%d", &t2.hour);
    printf("Enter the minute of t2:");
    scanf("%d", &t2.min);
    printf("Enter the second of t2:");
    scanf("%d", &t2.sec);
    int a = timeCmp(t1, t2);
    printf("The result of the comparison is : %d", a);
}