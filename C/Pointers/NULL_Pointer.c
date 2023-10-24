#include<stdio.h>
#include<stdlib.h>

void main()
{
int *ptr1;
printf("%d\n", *ptr1); // --> Anything is possible here!
printf("%d\n", ptr1); // --> This is not correct!

int *ptr = NULL;
printf("%d\n", ptr);
printf("%d\n", *ptr); // ---> We cannot dereference the null pointer!
// NULL pointer does not refer any valid object!

int *ptr2;
ptr = (int *)malloc(5 * sizeof(int));
if (ptr2 == NULL)
{
    printf("We can not dereference it!");
}
else{
    printf("%d\n", *ptr2);
}
}