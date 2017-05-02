
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
    vector<int> v1 (10,42); // this is the preferred way since all the elements have the same value
    vector<int> v2 = {42, 42, 42} ;// but writing 42, ten times ...
    vector<int> v3;

    for (int i = 0; i<10; i++)
        v3.push_back(42);
 
    if (v1 == v3)
        cout<<" they are equal" <<endl;

    return 0;
}
