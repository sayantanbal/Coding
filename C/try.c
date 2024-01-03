// #include <stdio.h>
// int main()
// {
//     int c, d = 0;
//     int a = 1;
//     int b = 1;
//     c = a || --b;
//     printf("a = % d, b = % d, c = % d, d = % d\n ", a, b, c, d);

//     // printf("%d\n", 0||1);
    
//     d= a-- && --b;
//     printf("a = % d, b = % d, c = % d, d = % d\n ", a, b, c, d);
//     return 0;
// }



//1. Sum of first n natural numbers


// #include<stdio.h>

// void main(){
//     printf("Enter how many terms you want? ");
//     int n, sum = 0 ; 
//     scanf("%d", &n);
//     for (int i = 0; i <= n; i++)
//     {
//         sum += i; 
//     }
//     printf("Sum of Natural Numbers upto %d is %d", n, sum);

    
// }



//2. Find the average of the first N natural numbers

// #include<stdio.h>
// void main (){
//     printf("Enter how many terms you want? ");
//     int n, sum = 0;
//     float avg = 0 ; 
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i; 
//     }
//     avg = (float)sum/n; // you can typecast here or just simply take all numbers including inputs in float. we're doing this for the possibility of fractional outcomes. 
//     printf("%.3f", avg);
// }


// 3.  Find the factorial of a number N.


// #include<stdio.h>
// void main(){
//     int count, factorial = 1;
//     printf("Enter a Number ->");
//     scanf("%d", &count);
//     for (int i = 1; i <= count; i++)
//     {
//         factorial *= i;
//     }
//     printf("%d", factorial);
// }

// 4. Given 3 numbers, find their maximum and minimum

#include<stdio.h>

void main(){
    float a,b,c;
    printf("Enter three numbers -> ");
    scanf("%f%f%f", &a,&b,&c);
    if (a == b && b == c)
        printf("given numbers all are equal");
    else if (a>b && a>c)
        printf("%d is maximum", a);
    else if (b>a && b>c)
        printf("%d is maximum", b);
    else
        printf("%d is minimum", c);
    
}