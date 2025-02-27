#include<bits/stdc++.h>
using namespace std;
// *1
// **2
// ***3
// ****4
// *****5

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << i << endl;
    }
    return 0;
}