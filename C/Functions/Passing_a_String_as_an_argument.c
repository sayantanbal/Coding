#include<stdio.h>
void display(char[]);
void main()
{
char str[] = "Tuhin";
display(str);
}
void display(char str[]){
    printf("The string is %s", str);
}