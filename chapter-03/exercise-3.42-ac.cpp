#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::begin;
using std::end;


int main()
{
 
   vector<int> v1{0, 1, 2, 3, 4, 5};

   cout << "the vector is " << endl;
   for(auto i : v1)
      cout << i;
   cout  << endl;
 
   int v1size = v1.size();

   int int_arr[v1size];

   decltype (v1.size()) k = 0;
   for (auto it : v1){
      int_arr[k] = it;
      ++k;
   }

   cout << "the array is " << endl;
   for(auto j : int_arr)
      cout << j;
   cout  << endl;

   return 0;
}

