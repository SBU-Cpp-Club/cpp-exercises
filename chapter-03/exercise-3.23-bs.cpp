
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
    vector<int> v;

    for (int i = 0; i<10; i++)
        v.push_back(i);
 
    for (auto it = v.begin(); it != v.end(); it++)
        *it = (*it)*2;

    for (auto i:v)
        cout << i << " " ;
	
    cout<<endl;

    return 0;
}
