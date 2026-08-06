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
void explain_vectors()
{
    // vectors are the containers which are dynamic in nature means you can increase the size of the vectors whenever you want to
    // it stores the elements in a similar fashion as the array does

    vector<int> vec; // Declaring a vector

    vec.push_back(1);
    vec.emplace_back(2); // here what emplace back do is it increases the size of the vec dynamically
    // Note: emplace back is faster than the push_back

    // we can define vector of a pair data type
    vector<pair<int, int>> vec_pair;
    vec_pair.push_back({1, 2});
    vec_pair.emplace_back(5, 2);
    // to add pair if we are using push_back method we have to use curly braces
    // to add pair if we are using emplace_back method we can directly added to the container as emplace back automatically assumes it to be a pair

    // Now if we want to declare a vector already filled for example
    vector<int> fill_vec(5, 100);

    // we can declare a container with no values but with a size
    vector<int> not_fill_vec(5);

    vector<int> v1(5, 20);
    // now if we want to copy the v1 to another vector v2 we can do this
    vector<int> v2(v1);
    // after filling the container completely we can increase the size of the cotainer also simply by using the emplace_back

    // Accessing the elements of the vectors
    // first method (direct method)
    // cout<<vec[0];

    // second method (using iterators)
    // syntax for defining an iterator
    // data_structure<data_type>::iterator (ierator_name) = vector_name.begin();
    // what iterator do is it points to the memory address of the container so if we try to print the iterator it will  give the memory address
    // so to print it we have to put star * infront of it to get the actual value stored on that particular address
    vector<int>::iterator it = fill_vec.begin();

    // cout<<*(it)<<" ";
    // it++;
    // cout<<*(it)<<" ";
    // it++;
    // cout<<*(it)<<" ";
    // it++;
    // cout<<*(it)<<" ";
    // it++;
    // cout<<*(it)<<" ";

    // Apart from .begin() we have some different iterators also
    //.end() -> this point after the last element of the container
    //  and when we are at the .end() iterator do it-- which will give the last element stored in the vector

    // vector<int> v;
    // v.push_back(9);
    // v.emplace_back(4);
    // v.emplace_back(8);
    // v.emplace_back(1);
    // vector<int>::iterator i = v.end();
    // i--;
    // cout<<"last element is "<<*(i)<<endl;
    // i--;
    // cout<<*(i)<<endl;
    // i--;
    // cout<<*(i)<<endl;
    // i--;
    // cout<<*(i)<<endl;

    // two more iterators are rend() {reverse end} and rbegin() {reverse begin}

    // printing a vector
    vec.emplace_back(5);
    vec.emplace_back(11);
    vec.emplace_back(7);
    // cout<<vec[0]<<" "<<vec.at(1);
    // cout<<vec.back()<< " ";

    // printing entire vector at once
    // we can do this using for loop and iterator
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it) << " ";
    }
    // shortcut for this is using auto means it will automatically assigns it to a vector iterator
    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it) << " ";
    }

    // Note when we use auto the machine will automatically check the type of data from the value we set it to auto means auto assignation

    // Apart from these we can use the for each loop for printing also
    for (auto it : vec)
    {
        cout << it << " ";
    }

    // DELETION in a Vector
}
int main()
{
    // print();
    // int s = sum(2,9);
    // cout<<s;
    explain_vectors();
    return 0;
}
