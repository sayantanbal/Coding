#include <stdio.h>
#include <stdlib.h>

void computeForwardDifferenceTable(float x[], float fx[], float forwardDiff[][20], int n) {
    // First, copy the function values to the first column of the difference table
    for (int i = 0; i < n; i++) {
        forwardDiff[i][0] = fx[i];
    }
    
    // Compute the forward differences
    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            forwardDiff[i][j] = forwardDiff[i + 1][j - 1] - forwardDiff[i][j - 1];
        }
    }
}

void computeBackwardDifferenceTable(float x[], float fx[], float backwardDiff[][20], int n) {
    // First, copy the function values to the first column of the difference table
    for (int i = 0; i < n; i++) {
        backwardDiff[i][0] = fx[i];
    }
    
    // Compute the backward differences
    for (int j = 1; j < n; j++) {
        for (int i = j; i < n; i++) {
            backwardDiff[i][j] = backwardDiff[i][j - 1] - backwardDiff[i - 1][j - 1];
        }
    }
}

void displayForwardDifferenceTable(float x[], float forwardDiff[][20], int n) {
    printf("\nForward Difference Table:\n\n");
    printf("x\t\tf(x)\t\t");
    
    for (int j = 1; j < n; j++) {
        printf("d^%d f\t\t", j);
    }
    printf("\n");
    
    for (int i = 0; i < n; i++) {
        printf("%.4f\t\t", x[i]);
        
        for (int j = 0; j < n - i; j++) {
            printf("%.4f\t\t", forwardDiff[i][j]);
        }
        printf("\n");
    }
}

void displayBackwardDifferenceTable(float x[], float backwardDiff[][20], int n) {
    printf("\nBackward Difference Table:\n\n");
    printf("x\t\tf(x)\t\t");
    
    for (int j = 1; j < n; j++) {
        printf("∇^%d f\t\t", j);
    }
    printf("\n");
    
    for (int i = 0; i < n; i++) {
        printf("%.4f\t\t", x[i]);
        
        for (int j = 0; j <= i; j++) {
            printf("%.4f\t\t", backwardDiff[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    float x[20], fx[20];
    float forwardDiff[20][20] = {0}, backwardDiff[20][20] = {0};
    
    printf("Numerical Methods - Forward and Backward Difference Tables\n");
    printf("--------------------------------------------------------\n\n");
    
    printf("Enter the number of data points (max 20): ");
    scanf("%d", &n);
    
    if (n <= 0 || n > 20) {
        printf("Invalid number of data points. Please enter a value between 1 and 20.\n");
        return 1;
    }
    
    printf("\nEnter the data points (x and f(x)):\n");
    
    for (int i = 0; i < n; i++) {
        printf("x[%d]: ", i);
        scanf("%f", &x[i]);
        printf("f(x[%d]): ", i);
        scanf("%f", &fx[i]);
    }
    
    // Compute both difference tables
    computeForwardDifferenceTable(x, fx, forwardDiff, n);
    computeBackwardDifferenceTable(x, fx, backwardDiff, n);
    
    // Display the difference tables
    displayForwardDifferenceTable(x, forwardDiff, n);
    displayBackwardDifferenceTable(x, backwardDiff, n);
    
    return 0;
}