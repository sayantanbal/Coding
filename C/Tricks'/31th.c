#include <stdio.h>
struct School
{
    int age, rollNo;
};
void solve()
{
    struct School sc;
    sc.age = 19;
    sc.rollNo = 82;
    printf("%d", (int)sizeof(sc));
}
int main()
{
    solve();
    return 0;
}