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



void explainVector(){
// dynamic in size. stores data in the similar fashion as array does.
    vector<int> v; // creates an empty container
    v.push_back(1); // inserts 1 in the empty container
    v.emplace_back(2); // dynamically increases size and pushes 2 at the back
    v.emplace_back(3); // dynamically increases size and pushes 2 at the back

    // why emplace_back() is faster than push_back() ?

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v1(5,100); // this declare 5 instances of 100
    // vector<int> v1(5); // this declare 5 instances declared with garbage val depends upon the compiler 
    // cout << v1[2]; // we can access the vector elems using array style

    // other way of accessing the values
    // using a iterator
    vector<int>::iterator it = v.begin();
    // it ++;
    it+=2;
    cout << *it << endl;

 }



int main()
{
#ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);
#endif

    // making a pair, STL functions are defined under <utility> 
    // explainPair();
    explainVector();
    return 0;
}