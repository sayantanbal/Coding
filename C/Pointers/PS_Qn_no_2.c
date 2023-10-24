#include<stdio.h>

void printAdd(int a){
    printf("The address of the variable is=%u\n", &a);
}

int main()
{
int i=6;
printf("The value of the variable i is=%d\n", i);
printAdd(i);
printf("The address of the variable i is %u\n", &i);
return 0;
}