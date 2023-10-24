#include<stdio.h>
typedef struct Bank_Account
{
    int acc_num;
    char name[10];
    float acc_bal;
}ac;

void main()
{
    ac p1 = {317413, "Tuhin", 5316.687};
    ac p2 = {536892, "Harry", 6859.263};
    ac p3 = {536811, "Sayantan", 7367.748};

    printf("%d %s %f\n", p1.acc_num, p1.name, p1.acc_bal);
    printf("%d %s %f\n", p2.acc_num, p2.name, p2.acc_bal);
    printf("%d %s %f\n", p3.acc_num, p3.name, p3.acc_bal);
}