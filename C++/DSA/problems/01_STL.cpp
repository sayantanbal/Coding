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

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].first;
}

void explainVector()
{
    // dynamic in size. stores data in the similar fashion as array does.
    // vector is used when we need random access. It is faster O(1), it stores data in contiguous memory space.
    vector<int> v;     // creates an empty container
    v.push_back(1);    // inserts 1 in the empty container
    v.emplace_back(2); // dynamically increases size and pushes 2 at the back
    v.emplace_back(3); // dynamically increases size and pushes 2 at the back

    // why emplace_back() is faster than push_back() ?

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v1(5, 100); // this declare 5 instances of 100
    // vector<int> v1(5); // this declare 5 instances declared with garbage val depends upon the compiler
    // cout << v1[2]; // we can access the vector elems using array style

    // other way of accessing the values
    // using a iterator
    vector<int>::iterator it = v.begin();
    // it ++;
    it += 2;
    cout << *it << endl;
}

void explainList()
{
    // list are used when we need efficient insertion or deletion
    list<int> a = {1, 2, 3};
    // now all the functions are same as vector except --> vector works as contiguous array block in memory and list works as a doublely linkedlist. inserting value in the front of a vec is more costly than inserting the value in front of a list.
    // so it is more efficient.
    a.push_front(5);
    for (const auto &s : a)
    {
        cout << s;
    }
}

void explainDeque(){
    // deque packs honey of the both world vector and list, while it uses multiple chunks of memory rather than a single contiguous block.
    deque<int> dq;
    dq.push_back(1);     // adds to the end
    dq.emplace_back(2);  // adds to the end
    dq.push_front(3);    // adds to the front
    dq.emplace_front(4); // adds to the front
    
    cout << dq.front() << endl; // first element
    cout << dq.back() << endl;  // last element
    
    // random access like vector
    cout << dq[1] << endl;
    
    // iteration
    for(auto x : dq) {
        cout << x;
    }
    
    dq.pop_back();  // removes from end
    dq.pop_front(); // removes from front
}

void explainStack(){
    
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);
#endif

    // making a pair, STL functions are defined under <utility>
    // explainPair();
    // explainVector();
    // explainList();
    // explainDeque();
    explainStack();
    return 0;
}