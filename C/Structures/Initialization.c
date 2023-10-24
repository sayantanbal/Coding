#include<stdio.h>
struct student
{
    char name[20];
    int Roll_Num;
    float marks;
// s = {89.2, "Tuhin", 20}--> Not Correct! 
// We have initialize datatypes respectively    
}s={"Tuhin", 20, 89.2};
struct Employee
{
    int Emp_Number;
    char Emp_Name[20];
    float salary;
}E1, E2;
void main()
{
struct student s;

struct Employee E1 = {342, "Aman", 20000.520};
struct Employee E2 = {1}; // Rest of all becomes NULL!
}