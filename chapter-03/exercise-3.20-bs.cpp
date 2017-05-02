
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

   while(cin >> input){
       v.push_back(input);
   }

   cout<<"Sum of pair of adjacent elelemtns:"<<endl;
   for (decltype(v.size()) i = 0; i< v.size()-1;i++)  
       cout << v[i]+v[i+1]<< endl;

   cout<<"Sum of last and first...etc:"<<endl;
   for (decltype(v.size()) i = 0; i< (v.size()+1)/2;i++)
       cout << v[i]+v[v.size()-i-1]<< endl;

    return 0;
}
