// // #include <stdio.h>
// // int main()
// // {
// //     int c, d = 0;
// //     int a = 1;
// //     int b = 1;
// //     c = a || --b;
// //     printf("a = % d, b = % d, c = % d, d = % d\n ", a, b, c, d);

// //     // printf("%d\n", 0||1);

// //     d= a-- && --b;
// //     printf("a = % d, b = % d, c = % d, d = % d\n ", a, b, c, d);
// //     return 0;
// // }

// // 1. Sum of first n natural numbers

// // #include<stdio.h>

// // void main(){
// //     printf("Enter how many terms you want? ");
// //     int n, sum = 0 ;
// //     scanf("%d", &n);
// //     for (int i = 0; i <= n; i++)
// //     {
// //         sum += i;
// //     }
// //     printf("Sum of Natural Numbers upto %d is %d", n, sum);

// // }

// // 2. Find the average of the first N natural numbers

// // #include<stdio.h>
// // void main (){
// //     printf("Enter how many terms you want? ");
// //     int n, sum = 0;
// //     float avg = 0 ;
// //     scanf("%d", &n);
// //     for (int i = 1; i <= n; i++)
// //     {
// //         sum += i;
// //     }
// //     avg = (float)sum/n; // you can typecast here or just simply take all numbers including inputs in float. we're doing this for the possibility of fractional outcomes.
// //     printf("%.3f", avg);
// // }

// // 3.  Find the factorial of a number N.

// // #include<stdio.h>
// // void main(){
// //     int count, factorial = 1;
// //     printf("Enter a Number ->");
// //     scanf("%d", &count);
// //     for (int i = 1; i <= count; i++)
// //     {
// //         factorial *= i;
// //     }
// //     printf("%d", factorial);
// // }

// // 4. Given 3 numbers, find their maximum and minimum

// // #include<stdio.h>

// // void main(){
// //     float a,b,c;
// //     printf("Enter three numbers -> ");
// //     scanf("%f%f%f", &a,&b,&c);
// //     if (a == b && b == c)
// //         printf("given numbers all are equal");
// //     else if (a>b && a>c)
// //         printf("%d is maximum", a);
// //     else if (b>a && b>c)
// //         printf("%d is maximum", b);
// //     else
// //         printf("%d is minimum", c);

// // }

// <<<<<<< HEAD
// // #include <stdio.h>
// // void main()
// // {
// //     int i;
// //     for (i = 0; i = 3; i++){
// //         printf("fdasf");
// //         if (i == 2)
// //         {
// //             printf("Inside loop %d\n", i);
// //             break;
// //         }
// //     }
// //     printf("outside loop %d", i);
// // }

// #include <stdio.h>
// void main()
// {
//     // int x = 10 , y = 10 , z = 10;
//     // if (x > y && x > z)
//     //     printf("x is greater");
//     // else if (y > x && y > z)
//     //     printf("y is greater");
//     // else
//     //     printf("z is greater");

//     // (x > y && x > z) ? printf("x is greater") : (y > x && y > z) ? printf("y is greater") : printf("z is greater");

//     // int x = 58, y = 28;
//     // float z = (float)x / (float)y;
//     // float z1 = x/y;
//     // printf("%0.2f %0.2f \n", z, z1);

//     // int i = 0;
//     // while (i < 10)
//     // {
//     //     i++;
//     //     if (i == 5)
//     //         continue;
//     //     printf("%d\n", i);
//     // }

//     // int i = 0;
//     // while (i < 10)
//     // {
//     //     i++;
//     //     if (i == 5)
//     //         break;
//     //     printf("%d\n", i);
//     // }

//     // int a = 8, b = 7, temp;
//     // printf("a = % d, b = % d\n", a, b);
//     // temp = a, a = b, b = temp;
//     // printf("a = % d, b = % d\n", a, b);

//     // int n, i, flag = 0;
//     // printf("Enter a positive integer: ");
//     // scanf("%d", &n);
//     // for (i = 2; i <= n / 2; ++i)
//     // {
//     //     // condition for nonprime number
//     //     if (n % i == 0)
//     //     {
//     //         flag = 1;
//     //         break;
//     //     }
//     // }
//     // if (n == 1)
//     // {
//     //     printf("1 is neither prime nor composite.");
//     // }
//     // else
//     // {
//     //     if (flag == 0)
//     //         printf("%d is a prime number.", n);
//     //     else
//     //         printf("%d is not a prime number.", n);
//     // }

//     // int n = 925, reversedNumber = 0, remainder;
//     // while (n != 0)
//     // {
//     //     remainder = n % 10;
//     //     reversedNumber = reversedNumber * 10 + remainder;
//     //     n = n / 10;
//     // }
//     // printf("Reversed Number = %d", reversedNumber);

//     int n = 54321;
//     int reversedNumber = 0, remainder;
//     while (n != 0)
//     {
//         remainder = n % 10;
//         if (remainder % 2 != 0)
//         {
//             reversedNumber = reversedNumber * 10 + remainder;
//         }
//         n = n / 10;
//     }
//     printf("Reversed Number = %d \n", reversedNumber);

//     // now we have to reverse the reversed number

//     int reversedNumber2 = 0, remainder2;
//     while (reversedNumber != 0)
//     {
//         remainder2 = reversedNumber % 10;
//         reversedNumber2 = reversedNumber2 * 10 + remainder2;
//         reversedNumber = reversedNumber / 10;
//     }
//     printf("Reversed Number = %d", reversedNumber2);
// =======
// #include <stdio.h>
// int main()
// {
//     int number;
//     printf("Enter the Number -> ");
//     scanf("%d", &number);
//     for (;;)
//     {
//         if (number % 2 == 0)
//         {
//         }
//         else
//         {
//             break;
//         }
//         number = (number / 2);
//         if (number == 2)
//         {
//             printf("The given number is power of 2 ");
//             break;
//         }
//     }
//     return 0;
// >>>>>>> 988b3c7 (Add code for various number manipulation tasks)
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     // int number;
//     // printf("%d", sizeof(int));
//     // return 0;
//     int x = pow(5, 3);
//     printf("%f", pow(5, 3));
// }

// #include <stdio.h>
// void main(){
//     int x = 10;
//     int y = x;
//     printf("%d ", x);
//     printf("%d ", y);

//     x = 11;
//     printf("%d ", x);
//     printf("%d ", y);
// }



