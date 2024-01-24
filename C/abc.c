
// swap two numbers without using a third variable
// a = 10, b = 20 -> a = 20, b = 10

#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d", a, b);
    return 0;
}




// add the digit of a number
// 1234 -> 1+2+3+4 = 10
// 12345 -> 1+2+3+4+5 = 15

#include<stdio.h>
int main()
{
    int n, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("Sum of digits: %d", sum);
    return 0;
}



// reverse a number
// 1234 -> 4321

#include<stdio.h>
int main()
{
    int n, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("Reverse of the number: %d", rev);
    return 0;
}


// check if a decimal number and its reverse are equal or not
// 1234 -> 4321 -> not equal
// 121 -> 121 -> equal

#include<stdio.h>
int main()
{
    int n, rev = 0, rem, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if(temp == rev)
        printf("Equal");
    else
        printf("Not equal");
    return 0;
}


// check if a number is a power of 2 or not
// 8 -> 2^3 -> yes
// 9 -> 2^3 -> no

#include<stdio.h>
int main()
{
    int n, temp, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(temp != 1)
    {
        if(temp % 2 != 0)
        {
            flag = 1;
            break;
        }
        temp = temp / 2;
    }
    if(flag == 0)
        printf("Power of 2");
    else
        printf("Not a power of 2");
    return 0;
}

// display all the numbers from 2 to 100 which are not divisible by 2 as well as 3
// 5, 7, 9, 11, 13, 17, 19, 23, 25, 29, 31, 35, 37, 41, 43, 47, 49, 53, 55, 59, 61, 65, 67, 71, 73, 77, 79, 83, 85, 89, 91, 95, 97

#include<stdio.h>
int main()
{
    int i;
    for(i = 2; i <= 100; i++)
    {
        if(i % 2 != 0 && i % 3 != 0)
            printf("%d ", i);
    }
    return 0;
}

// check if a input alphabet is a vowel or not
// a, e, i, o, u -> vowel
// b, c, d, f, g, h, j, k, l, m, n, p, q, r, s, t, v, w, x, y, z -> consonant

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("Vowel");
    else
        printf("Consonant");
    return 0;
}

// use switch case to check if a input alphabet is a vowel or not
// a, e, i, o, u -> vowel
// b, c, d, f, g, h, j, k, l, m, n, p, q, r, s, t, v, w, x, y, z -> consonant

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': printf("Vowel");
                  break;
        default: printf("Consonant");
    }
    return 0;
}


// check if a number is a perfect number or not
// 6 -> 1 + 2 + 3 = 6 -> perfect number
// 28 -> 1 + 2 + 4 + 7 + 14 = 28 -> perfect number
// 12 -> 1 + 2 + 3 + 4 + 6 = 16 -> not a perfect number

#include<stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum = sum + i;
    }
    if(sum == n)
        printf("Perfect number");
    else
        printf("Not a perfect number");
    return 0;
}


// find all the perfect numbers that are more than 1 digit and less than 5 digit
// 28, 496, 8128

#include<stdio.h>
int main()
{
    int n, i, j, sum;
    for(i = 10; i < 100000; i++)
    {
        n = i;
        sum = 0;
        for(j = 1; j < n; j++)
        {
            if(n % j == 0)
                sum = sum + j;
        }
        if(sum == n)
            printf("%d ", n);
    }
    return 0;
}

