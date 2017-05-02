
#include <vector>
#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

using std::vector;



int main()
{
    vector<int> v1; // no elements
    vector<int> v2(10); // 10 elements initialized with 0
    vector<int> v3(10,42); // 10 elements with value 42
    vector<int> v4{10}; // one element initialized with 10
    vector<int> v5{10,42}; // 2 elements: 10 and 42
    vector<string> v6{10}; //ten default initialized elements
    vector<string> v7{10,"hi"}; //ten elements with "hi"

    cout<<v1.size()<<endl;
    cout<<v2.size()<<endl;
    cout<<v3.size()<<endl;
    cout<<v4.size()<<endl;
    cout<<v5.size()<<endl;
    cout<<v6.size()<<endl;
    cout<<v7.size()<<endl;

    return 0;
}
