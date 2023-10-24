#include <stdio.h>
#include <stdlib.h>
int *f()
{
    // Here the pointer is also act as an dangling pointer if we use local variable!
    static int a = 10; // static is used to declare a global variable!
    // int a = 10; --> it will throw warning! cause here we want to return the address of a local variable!
    return &a;
}
void main()
{
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 10;
    printf("%d\n", *ptr);
    free(ptr);            // Now it acts like a dangling pointer!
    printf("%d\n", *ptr); // It will print some garbage value

    // Part 2 --->
    int *ptr2;
    {
        int a = 9;
        ptr2 = &a;
        printf("a=%d\n", *ptr2);
    }
    printf("a=%d\n", *ptr2); // it can also be different!
    // printf("%d\n", a); ---> we can not access a outside the block!

    int *ptr3 = f();
    printf("%d\n", *ptr3);
}