#include <bits/stdc++.h>
using namespace std;
void explainPair()
{
    // pair<int, float> p = {1, 3.1};
    // cout << p.first << " " << p.second;

    // pair<int,pair<float,double>> p = {1, {2.3, 3.4}};
    // cout << p.first << endl;
    // cout << p.second.first << endl;
    // cout << p.second.second << endl;


    pair<int,int> arr [] = {{1,2}, {3,4}, {5,6}};
    cout << arr[1].first;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);
#endif

    // making a pair, STL functions are defined under <utility> 
    explainPair();
    return 0;
}