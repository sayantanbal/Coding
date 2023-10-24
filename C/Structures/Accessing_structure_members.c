#include<stdio.h>
struct Employee
{
    int Emp_Number;
    char Emp_Name[20];
    float salary;
}E1, E2;
void main()
{
//E1 = E2; // It is only valid for same type of stuctures!
//if(E1>E2){
    // Conditional operator not valid fore stucture but valid for the members!
//}---> Not Correct!
struct Employee E1={345, "Bal", 40000.432};
printf("%s\n", E1.Emp_Name);
printf("%d\n", E1.Emp_Number);
printf("%f\n", E1.salary);

/*
struct Employee E2={100};
E2.Emp_Name[20] = "Tuhin"; // Throws Warning!
printf("%s", E2.Emp_Name);
*/
printf("Enter info of E2:");
scanf("%d", &E1.Emp_Number);
scanf("%s", &E1.Emp_Name);
scanf("%f", &E1.salary);

}