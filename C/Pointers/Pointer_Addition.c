#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    // int *q = &a;
    // p+q; ---> This will through an error!
    printf("The address of a is %u\n", p);
    printf("The address of a is %d\n", p);
    p = p + 2; // p = p + 2 * (Size of the datatype)
    printf("The address of a is %u\n", p);
    printf("The address of a is %d\n", p);

    // Using an array --->

    int arr[5] = {0, 4, -3, 2, 10};
    int *r = &arr[0];
    printf("%d\n", *r);
    r = r + 2;
    printf("%d\n", *r);
    /* r = &arr[0]
       r + n = &arr[0+n]
       r + 2 = &arr[0+2]*/

    r + 3; // does not effect the original value!
    printf("%d\n", *r);
    return 0;
}