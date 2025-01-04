// Write a funcƟon to calculate your age from the input date of birth (in dd-mm-yy) format.
#include <stdio.h>
#include <time.h>

// int main()
// {
//     time_t t = time(NULL);
//     struct tm tm = *localtime(&t);
//     printf("Current date/time: %02d-%02d-%02d %02d:%02d:%02d\n",tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,tm.tm_hour, tm.tm_min, tm.tm_sec);
//     return 0;
// }

int currDate = 22;
int currMon = 12;
int currYr = 2024;
void calcAge(int birthDate, int birthMon, int birthYr)
{

    int Yr = currYr - birthYr;
    int Mon = currMon - birthMon;
    int Date = currDate - birthDate;
    if (Date < 0)
    {
        Mon--;
        Date = currDate + 30 - birthDate;
    }
    if (Mon < 0)
    {
        Yr--;
        Mon = currMon + 11 - birthMon;
    }

    printf("age is --> %d Days %d Months %d Years", Date, Mon, Yr);
}
int main(int argc, char const *argv[])
{

    int birthDate, birthMon, birthYr;
    scanf("%d %d %d", &birthDate, &birthMon, &birthYr);
    calcAge(birthDate, birthMon, birthYr);
    return 0;
}
