// #include <stdio.h>

// int main()
// {
//     int marks[5], sum = 0;
//     float avg;
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter the number of %dth student :", (i+1));
//         scanf("%d", &marks[i]);
//     }
//     for (int j = 0; j < 5; j++)
//     {
//         sum = sum + marks[j];
//     }
//     avg = sum / 5;
//     printf("The sum of the marks of all students is %d\n", sum);
//     printf("The avg of the marks of all students is %f\n", avg);
//     return 0;
// }



#include <stdio.h>
void main(){
    float marks[5], sum = 0; // sum is initialised as '0' as C doest not owns a garbage collector.

    // taking input 
    printf("Enter the marks of the students: \n");
    for (int i = 0; i < sizeof(marks)/sizeof(float); i++)
    {
        printf("Enter the marks of the %dth student. \n", (i+1));
        scanf("%f", &marks[i]);
    }
    
    // printing the marks
    for (int i = 0; i < sizeof(marks)/sizeof(float); i++)
    {
        printf("The marks of %dth student is %f. \n",(i+1),marks[i]);
    }
    // printing the average marks
    
}