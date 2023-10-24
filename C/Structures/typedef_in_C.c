#include<stdio.h>
typedef struct student
{
    char name[20];
    int roll_no;
    float marks;
}student;

void main()
{
    student s1 = {"Tuhin", 112, 90.06};
    printf("Name=%s\n", s1.name);
    printf("Roll no=%d\n", s1.roll_no);
    printf("Marks=%f\n", s1.marks);

}