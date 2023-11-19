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