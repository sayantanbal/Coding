#include<stdio.h>
void changeVal(int a , int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
int a=3;
int b= 10 * a;
printf("The value of a is %d\n", a);
changeVal(a , b);// will not work due to call by value
printf("The value of a after the function call is %d\n", a);
return 0;
}