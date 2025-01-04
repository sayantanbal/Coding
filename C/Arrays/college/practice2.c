// Write a program in C (using pointers, array and function) to sort an input string of N alpha characters (N is odd without blank space) in such a way that the output string is a rotation around its middle character. Example, if input is “HELLO”, output should be: “OLLEH” 

// #include <stdio.h>
// #include <string.h>

// void rotation(char *str, int n)
// {
//     int mid = n / 2;
//     for (int i = 0; i < mid; i++)
//     {
//         char temp = str[i];
//         str[i] = str[n - i - 1];
//         str[n - i - 1] = temp;
//     }
//     printf("The rotated string is: %s\n", str);
// }

// int main(int argc, char const *argv[])
// {
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%s", str);
//     int n = strlen(str);
//     rotation(str, n);
//     return 0;
// }


// Write a program in C (using pointers, array and function) to sort an input string of N alpha characters (N is odd without blank space) in such a way that the output string is a rotation around its middle character. Example, if input is “HELLO”, output should be: “OLLEH” 

#include <stdio.h>
#include<string.h>

void sortAroundMidChar(char *str, int size){
    // first step --> find the mid char, since the i/p is a odd length string there's only one mid.
    int mid = size/2;
    for (int i = 0; i < mid; i++)
    {
        char temp = str[i];
        str[i] = str[size-1-i];
        str[size-1-i] = temp;
    }
    printf("The rotated string is: %s\n", str);
}

int main(int argc, char const *argv[])
{

    printf("Enter the number of character --> ");
    int size ;
    scanf("%d", &size);
    printf("Enter the odd char str --> ");
    char str[size] ;
    scanf("%s", str);

    sortAroundMidChar(str, size);
    return 0;
}
