#include<stdio.h>
#include<stdlib.h>// use to generate a random number
#include<time.h>//to use the fn time
int main()
{
int number, guess, nguesses=1;
srand(time(0)); //it returns time in seconds and use to generate different number at different time
number = rand()%100 +1; //rand() is used to generate a random number between 1 to 100
//printf("The number is %d\n", number);
// keep running the loop until the number is gueesed
do
{
    printf("Guees the number between 1 to 100 :");
    scanf("%d", &guess);
    if (guess>number)
    {
        printf("Lower number please!!\n");
    }
    else if (guess<number)
    {
        printf("Higher number please!!\n");
    }
    else
    {
        printf("You guessed it in %d attempts\n", nguesses);
    }
    nguesses++;
} while (guess!=number);

return 0;
}