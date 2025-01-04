// Write programs in C using both tail-recursive and non-tail-recursive functions to find factorial of a given positive integer N

#include <stdio.h>
long long tail_recursive(int number, long long result)
{
    if (number == 0)
    {
        return result;
    }
    else
    {
        return tail_recursive(number - 1, number * result);
    }
}

long long non_tail_recur(int number){
    if (number <= 0)
    {
        return 1;
    }
    else
    {
        return number*non_tail_recur(number-1);
    }
    
}
int main()
{
    int number;
    long long factorial = 1;
    scanf("%d", &number);
    printf("%lld", tail_recursive(number, factorial));
    printf("%lld", non_tail_recur(number));
    return 0;
}