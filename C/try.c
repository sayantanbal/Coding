<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch;
    scanf("%c", &ch);
    char s[100];
    scanf("%s", s);
    char sen[100];
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    

    printf("%c\n", ch);
    printf("%s\n", s);
    // printf("%s", sen);
    puts(sen);
    return 0;
}
=======
#include<stdio.h>
#include<math.h>
int main(){
    long long int n;
    long int x;
    printf("%d\n", sizeof(n));
    n = __LONG_LONG_MAX__;
    x = pow(2,64);
    printf("%ld\n", x);
    printf("\n%lld\n", n);

return 0;
}
>>>>>>> c1eebcbb88e8c710e298e42eef501da59eb99d72
