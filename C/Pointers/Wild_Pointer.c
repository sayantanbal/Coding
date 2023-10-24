#include<stdio.h>
#include<stdlib.h>

void main()
{
int *ptr; // Here the uninitialized pointer is called wild pointer!
// It is risky to use so we have to declare it NULL or make it pointing to another variable or use dynamic memory allocation!
printf("%d\n", *ptr);
}