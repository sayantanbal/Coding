#include<stdio.h>
#include<conio.h>
int main()
{
int i=1, sum=0, n=10;
// using for loop
// for ( i = 1; i <=n; i++)
// {
//     sum +=i;
// }
// using while loop
// while (i<=n)
// {
//     sum +=i;
//     i++;
// }
// using do while loop
do
{
    sum += i;
    i++;
} while (i<=n);

printf("The value of sum(1 to 10) is %d", sum);

return 0;
}