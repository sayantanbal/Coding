#include<stdio.h>
char *display();
void main()
{
char *str;
str = display();
// str[0] = "H"; --> it is not possible!
printf("String is %s", str);
}
char *display(){
    static char str[] = "Tuhin";
    return str;
    // Another way--->
    // char *str = "Tuhin";
    // return str;
    // Another way --->
    // return "Tuhin";
}