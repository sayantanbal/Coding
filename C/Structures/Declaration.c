#include<stdio.h>
struct student
{
    int roll_no;
    char name[10]; // in memory it is 18bytes!
    float marks;
};
// Another way--->
struct Employee
{
    int Emp_Number;
    char Emp_Name[20];
    float salary;
}E1, E2;

void main()
{
    int a;
struct student s1, s2;
struct Employee;
}