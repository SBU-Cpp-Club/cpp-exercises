
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
    
    vector<vector<int>> v={v1,v2,v3,v4,v5}; // store the integer vectors
    vector<vector<string>> vs = {v6,v7};
   

    for (auto i : v){
        cout<<endl<< i.size() <<endl;
	for (auto it = i.begin(); it != i.end(); ++it)
	    cout << *it << " ";
	}   

    cout<<endl;
    for (auto i : vs){
        cout<<endl<< i.size() <<endl;
        for (auto it = i.begin(); it != i.end(); ++it)
            cout << *it << " ";
        }

    cout<<endl;


    return 0;
}
