// STL stands for Standard Template Library
// It is a powerful collection of pre-written algorithms, containers, functions and iterators
//  designed to save the developer's time by avoiding the need to
#include <bits/stdc++.h>
using namespace std;
void print()
{
    cout << "saim";
}
int sum(int a, int b)
{
    return a + b;
}

// The C++ STL is divided into 4 parts
// 1. Algorithms
// 2. Containers
// 3. Functions
// 4. Iterators

// Pairs -> these are the parts of utility libraries
void explain_pairs()
{
    // pair<int,int> p = {1,3};

    // cout<<p.first << " " << p.second;

    // pairs has nested properties means we can define a pair inside a pair
    //  pair <int,pair<int,int>> p = {1, {3,4}};
    //  cout<<p.first<<" "<<p.second.second<<" "<<p.second.first<<endl;

    // if we want to declare an array of pairs we can do like this
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second << " " << arr[1].first << endl;
}

int main()
{
    // print();
    // int s = sum(2,9);
    // cout<<s;
    explain_pairs();
    return 0;
}
