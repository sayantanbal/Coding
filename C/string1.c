#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    // char a = 'a';
    // char b = 'b';
    // printf("Before swap: a = %c, b = %c\n", a, b); // Print initial values
    // // XOR swap algorithm
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;
    // printf("After swap: a = %c, b = %c\n", a, b); // Print the swapped values



    char str1[100] = "Sayantan";
    // we are gonna rev this string.
    // ? two ways to do this are: 1. using a new string, 2. using the same string
    // * 1. using a new string

    char str2[100];
    // int i, j;
    // now we need to just store the values of str1 in str2 in reverse order. how can we do that? 
    for (int i = 0; i < strlen(str1); i++)
    {
        str2[i] = str1[strlen(str1)-i-1];
        printf("%c\n", str2[i]);
    }
    printf("The reversed string is: %s\n", str2);

    // * 2. using the same string
    // we can use the same string to reverse it. here also by two ways: i. using the strrev() function, ii. using the same logic as above but in the same string.
    // i. using the strrev() function
    strrev(str1);
    printf("The reversed string is: %s\n", str1);

    // ii. using the same logic as above but in the same string
    // ! this is the XOR swap algorithm, maybe a bit overwhelming but it is a good way to swap two values without using a third variable. or you may use another char variable to store the value of the first char variable and then swap the values. but this is a better way to do that.
    for (int i = 0; i < strlen(str1)/2; i++)
    {
        str1[i] = str1[i] ^ str1[strlen(str1)-i-1];
        str1[strlen(str1)-i-1] = str1[i] ^ str1[strlen(str1)-i-1];
        str1[i] = str1[i] ^ str1[strlen(str1)-i-1];
    }
    printf("The reversed string is: %s\n", str1);

    
    

    return 0;
}
