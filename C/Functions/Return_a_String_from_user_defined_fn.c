#include <stdio.h>
const char *display();
void main()
{
    const char *str;
    str = display();
    // str[0] = 'H'; ----> we cannot modify it! if we want to the static is required!
    printf("String is %s", str);
}
const char *display()
{
    // char str[] = "Tuhin"; --> it returns address of a local variable!
    // static char str[] = "Tuhin";
    const char *str = "Tuhin"; // You can access but not modified cause in this case the memory is read only!
    // By using const you can avoid the problem of modifying!
    return str;
}