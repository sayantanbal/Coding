// Write a C function to print a digit into word.


// #include <stdio.h>
// #include <string.h>
// void print_digit(int n)
// {
//     char *words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
//     // printf("%ld",sizeof(words)/sizeof(words[0]));
//     printf("The digit in word is: %s\n", words[n]);
// }
// int main(int argc, char const *argv[])
// {
//     int n;
//     printf("Enter a digit: ");
//     scanf("%d", &n);
//     print_digit(n);
//     return 0;
// }




// Write a C function to print a digit into word.
#include<stdio.h>
#include<string.h>
void DigitToWord(int n){
    char *str[] = {
        "Zero",
        "One",
        "Two",
        "Three",
        "Four",
        "Five",
        "Six",
        "Seven",
        "Eight",
        "Nine"
    };
    printf("%s \n", str[n]);
}

int main(){
    printf("Enter the number --> ");
    int n;
    scanf("%d", &n);
    DigitToWord(n);
}