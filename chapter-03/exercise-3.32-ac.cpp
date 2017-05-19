#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


int main(){

   constexpr size_t array_size = 10;
   int ia[array_size], ia2[array_size]; 

   for (size_t ix = 0; ix < array_size; ++ix)
        ia[ix] = ix;

//   for (auto i : ia)
//        ia2[i] =  ia[i];   //NO! i is element, not counter.

   for (size_t ix = 0; ix < array_size; ++ix)
        ia2[ix] =  ia[ix];  

   for (auto i : ia2)
        cout << ia2[i] << " ";
   cout << endl;

   return 0;
}
