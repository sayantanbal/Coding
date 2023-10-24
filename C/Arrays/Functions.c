#include<stdio.h>
// void printArray(int *ptr, int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of the element %d is %d\n", i+1, *(ptr+i));
//     }

   void printArray(int ptr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("The value of the element %d is %d\n", i+1, ptr[i]);
    } 
    ptr[2] = 5625;// it will work due to call by reference
}
int main()
{
int arr[] = {1,34,56,37,82,90.100};
printArray(arr,7);
printf("%d", arr[2]);
return 0;
}