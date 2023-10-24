#include<stdio.h>
struct student
{
    char name[10];
    int roll_no;
    float marks;
};

void main()
{
    struct student s1 = {"Tuhin", 23, 88.65};
    struct student s2 = {"Harry", 12, 89.59};
    struct student *ptr1 = &s1;
    struct student *ptr2 = &s2;

    printf("Name of student 1 is %s\n", (*ptr1).name);
    printf("Roll no of student 1 is %d\n", (*ptr1).roll_no);
    printf("Marks of student 1 is %f\n", (*ptr1).marks);

    printf("Name of student 2 is %s\n", ptr2->name);
    printf("Roll no of student 2 is %d\n", ptr2->roll_no);
    printf("Marks of student 2 is %f\n", ptr2->marks);
}