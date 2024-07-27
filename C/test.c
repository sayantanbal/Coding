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


#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x = printf("Hello World\n");
    printf("%d\n", x);
    return 0;
}
