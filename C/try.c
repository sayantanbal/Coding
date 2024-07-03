//7. Add digits of a decimal number. For example, if the input is 123, the output should be 6 (1 + 2 + 3 = 6). 

// #include <stdio.h>
// int main() {
//     int n, sum = 0;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     while (n > 0) {
//         sum += n % 10;
//         n /= 10;
//     }
//     printf("Sum of digits: %d\n", sum);
//     return 0;
// }

// 8. Print a number in reverse order. For example, if the input is 123, the output should be 321.

// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     while (n > 0) {
//         printf("%d", n % 10);
//         n /= 10;
//     }
//     printf("\n");
//     return 0;
// }

// // 9. Check if a number is a palindrome. A palindrome is a number that reads the same forwards and backwards. For example, 121 is a palindrome, but 123 is not.

// #include <stdio.h>
// int main() {
//     int n, reversedN = 0, remainder, originalN;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     originalN = n;
//     while (n != 0) {
//         remainder = n % 10;
//         reversedN = reversedN * 10 + remainder;
//         n /= 10;
//     }
//     if (originalN == reversedN) {
//         printf("%d is a palindrome.\n", originalN);
//     } else {
//         printf("%d is not a palindrome.\n", originalN);
//     }
//     return 0;
// }

// // 10. Check if a number is power of 2 or not

// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if (n == 0) {
//         printf("0 is not a power of 2.\n");
//     } else if ((n & (n - 1)) == 0) {
//         printf("%d is a power of 2.\n", n);
//     } else {
//         printf("%d is not a power of 2.\n", n);
//     }
//     return 0;
// }

// // 11. Display all the numbers that are not divisible by 2 as well as 3 in the range (2-100)

// #include <stdio.h>
// int main() {
//     for (int i = 2; i <= 100; i++) {
//         if (i % 2 != 0 && i % 3 != 0) {
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }

// // 12. Check whether a user given alphabet is vowel or not

// #include <stdio.h>
// int main() {
//     char c;
//     int isLowercaseVowel, isUppercaseVowel;
//     printf("Enter an alphabet: ");
//     scanf("%c", &c);
//     isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
//     isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
//     if (isLowercaseVowel || isUppercaseVowel) {
//         printf("%c is a vowel.\n", c);
//     } else {
//         printf("%c is a consonant.\n", c);
//     }
//     return 0;
// }


// // 13. Check if a number is perfect or not

// #include <stdio.h>
// int main() {
//     int n, sum = 0;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for (int i = 1; i < n; i++) {
//         if (n % i == 0) {
//             sum += i;
//         }
//     }
//     if (sum == n) {
//         printf("%d is a perfect number.\n", n);
//     } else {
//         printf("%d is not a perfect number.\n", n);
//     }
//     return 0;
// }

// // 14. Find all the perfect numbers more than 1 digit and less than 5 digits.

// #include <stdio.h>
// int main() {
//     for (int n = 10; n < 100000; n++) {
//         int sum = 0;
//         for (int i = 1; i < n; i++) {
//             if (n % i == 0) {
//                 sum += i;
//             }
//         }
//         if (sum == n) {
//             printf("%d\n", n);
//         }
//     }
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int a = 7, b = 5, c = 3;
//     printf("%d\n", a/b*c);
//     a = a + a/b*c;
//     printf("%d\n", a);
//     return 0;
// }



#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person p;
    printf("Enter name: ");
    fgets(p.name, sizeof(p.name), stdin);

    // Remove trailing newline (optional)
    // p.name[strcspn(p.name, "\n")] = '\0';

    printf("Enter age: ");
    scanf("%d", &p.age);

    printf("Name: %s, Age: %d\n", p.name, p.age);
    return 0;
}
