#include<stdio.h>

int main()
{
int arr[10] = {1,34,56,74,98,74,68, 56 ,87,90};
int *ptr;
ptr = &arr[0];
ptr = ptr + 2;
// printf("The value of the third element is %d\n", *(ptr + 2));
// printf("The value of the second element is %d\n", *(ptr + 1));
// printf("The value of the fourth element is %d\n", *(ptr + 3));
// printf("The value of the fifth element is %d\n", *(ptr + 4));
// printf("The value of the sixth element is %d\n", *(ptr + 5));
// printf("The value of the seventh element is %d\n", *(ptr + 6));
// printf("The value of the eighth element is %d\n", *(ptr + 7));
// printf("The value of the ninth element is %d\n", *(ptr + 8));
// printf("The value of the tenth element is %d\n", *(ptr + 9));
// printf("The value of the first element is %d\n", *ptr);

if (ptr == &arr[2])
{
    printf("These point to the same location in memory\n");
}
else{
    printf("These do not point to the same location in memory\n");
}
return 0;
}