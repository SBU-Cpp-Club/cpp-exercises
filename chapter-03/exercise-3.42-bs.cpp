#include<vector>
#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{

   constexpr size_t size = 6;

   vector<int> v{0, 1, 2, 3, 4, 5};
   int copy[size];
   

   for (size_t ix= 0; ix<size; ++ix)
     copy[ix] =v[ix]; //probably the reference? 

   for (auto i : copy)
     cout<< i << " ";

   cout<<endl;

   return 0;

}
