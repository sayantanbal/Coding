#include <stdio.h>
#include <stdlib.h>
int main() {
    int rows = 3;
    int cols[] = {2, 4, 3}; // Different column sizes for each row
    // Step 1: Allocate array of pointers
    int **array = (int **)malloc(rows * sizeof(int *));
    // Step 2: Allocate each row with different column sizes
    for (int i = 0; i < rows; i++) {
        array[i] = (int *)malloc(cols[i] * sizeof(int));
    }
    // Step 3: Initialize the array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols[i]; j++) {
            array[i][j] = i * cols[i] + j; // Example initialization
        }
    }
    // Step 4: Print the array
    for (int i = 0; i < rows; i++) {
        printf("Row %d: ", i);
        for (int j = 0; j < cols[i]; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    // Step 5: Free memory
    for (int i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);
    return 0;
}
// Output:
// Row 0: 0 1
// Row 1: 0 1 2 3
// Row 2: 0 1 2