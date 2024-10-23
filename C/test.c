// #include <stdio.h>
// #include <limits.h>

// // Function prototypes
// void findMaxMinProductPairs(int arr[], int n, int *maxProduct, int *minProduct, int maxPair[], int minPair[]);

// int main() {
//     int n;

//     // User input for number of elements
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     // Validate input
//     if (n <= 0) {
//         printf("Number of elements must be positive.\n");
//         return 1;
//     }

//     int arr[n];

//     // User input for the array elements
//     printf("Enter %d positive distinct integers:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         if (arr[i] < 0) {
//             printf("Please enter positive integers only.\n");
//             return 1;
//         }
//     }
    
//     int maxProduct, minProduct;
//     int maxPair[2], minPair[2];
    
//     findMaxMinProductPairs(arr, n, &maxProduct, &minProduct, maxPair, minPair);

//     printf("Maximum product - %d (%d, %d)\n", maxProduct, maxPair[0], maxPair[1]);
//     printf("Minimum product - %d (%d, %d)\n", minProduct, minPair[0], minPair[1]);

//     return 0;
// }

// // Function to find maximum and minimum product pairs
// void findMaxMinProductPairs(int arr[], int n, int *maxProduct, int *minProduct, int maxPair[], int minPair[]) {
//     *maxProduct = INT_MIN;
//     *minProduct = INT_MAX;

//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             int product = arr[i] * arr[j];
            
//             if (product > *maxProduct) {
//                 *maxProduct = product;
//                 maxPair[0] = arr[i];
//                 maxPair[1] = arr[j];
//             }
            
//             if (product < *minProduct) {
//                 *minProduct = product;
//                 minPair[0] = arr[i];
//                 minPair[1] = arr[j];
//             }
//         }
//     }
// }


// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int x = printf("Hello World\n");
//     printf("%d\n", x);
//     return 0;
// }





#include<stdio.h>
int main(int argc, char const *argv[])
{
    // string is an array of characters in C.

    // diff ways to init a string.
    char str1[] = "Hello"; // here we are not specifying the size of the array neither the null char, so the size of the array will be the size of the string + 1 for the null character
    // but if you want to declare a string with a specific size then you can do it like this
    char str2[10] = "Hello"; // here the size of the array is 10, but the size of the string is 6, so the remaining 4 will be filled with null characters.
    printf("%s\n", str2[7]); // this will print null character, all the remaining space will be filled with null characters!

    // another way to declare a string is like this
    char str3[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // here we are specifying the size of the array and the null character.



    // char abc[5] = "Hello"; // this will give an error because the size of the array is 5, but the size of the string is 6, so the null character will not fit in the array.
    char abc[4] = {'a', 'b', 'c', '\0'}; // this will work fine because the size of the array is 6 and the size of the string is 6.
    printf("1");
    printf("%s\n", abc[3]);


    char str4[10] = "Hello";
    char s1[10] = str4;
    printf("%s\n", s1); // you can't assign a string to another string like this, you have to use strcpy() function to copy the string to another string. as "str4" is a pointer to the first element of the array, so you can't assign a pointer to another pointer like this.



    return 0;
}
