#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;


int main(){

   constexpr size_t array_size = 10;
   int ia[array_size]; 

//   for (size_t ix = 1; ix <= array_size; ++ix){
   for (size_t ix = 0; ix < array_size; ++ix){   // this should be correct
        //ia[ix] = 12;
        ia[ix] = ix;
        cout << ix << "  " << ia[ix] << endl;
     }

   for (size_t ix = 1; ix <= array_size; ++ix) //why does this get the last 10?
//   for (size_t ix = 0; ix < array_size; ++ix) 
        cout << ia[ix] << " ";
   cout << endl;

   return 0;
}
