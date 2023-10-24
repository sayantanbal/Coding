#include <stdio.h>
typedef struct date
{
    int date;
    int month;
    int year;
} date;
void display(date d)
{
    printf("%d/%d/%d\n", d.date, d.month, d.year);
}
int dateCmp(date d1, date d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }

    if (d1.year < d2.year)
    {
        return -1;
    }

    if (d1.month > d2.month)
    {
        return 1;
    }

    if (d1.month < d2.month)
    {
        return -1;
    }

    if (d1.date > d2.date)
    {
        return 1;
    }

    if (d1.date < d2.date)
    {
        return -1;
    }

    return 0;
}
void main()
{
    date d1 = {23, 11, 2003};
    date d2 = {2, 1, 1998};
    display(d1);
    display(d2);
    int a = dateCmp(d1,d2);
    printf("Date comparison function returns %d", a);
}