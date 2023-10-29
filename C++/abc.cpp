
#include<iostream>
#include<string>
using namespace std;
int main()
{
    // char a = 'a',b = 'b' ;


    string str1 = "Hello";
    char a = str1[0];
    char b = str1[4];
    cout << a << b << endl;

    a = a^b;
    b = a^b;
    a = a^b;
    cout << a << b << endl;
    
return 0;
}