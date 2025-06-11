#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a = 1;
    int* b = &a;
    int** c = &b;
    // int* d = &b;
    cout << "a: " << a << "b: " << b << "c: " << c << endl;
    return 0;
}