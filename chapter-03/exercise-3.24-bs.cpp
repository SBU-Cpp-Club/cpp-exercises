
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
   int input;
   vector<int> v;

  //read a set of elements
   while(cin >> input){
       v.push_back(input);
   }

   cout<<"Sum of pair of adjacent elelemtns:"<<endl;
   for (auto  it = v.begin(); it != v.end()-1; ++it)  
       cout << *it+*(it+1)<< endl;

   cout<<"Sum of last and first...etc:"<<endl;
   for (auto it = v.begin(); it != (v.begin() + v.size()/2); ++it)
       cout << *it+*(v.end()-(it-v.begin())-1)<< endl;

    return 0;
}
