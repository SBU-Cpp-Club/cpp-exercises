#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;


int main(){

   constexpr size_t array_size = 10;
   int ia[array_size]; 

   for (size_t ix = 0; ix < array_size; ++ix)
        ia[ix] = ix;

// are both of the below considered good style?
   for (size_t ix = 0; ix < array_size; ++ix)
        cout << ia[ix] << " ";
   cout << endl;

   for (auto i : ia)
        cout << ia[i] << " ";
   cout << endl;

   return 0;
}
