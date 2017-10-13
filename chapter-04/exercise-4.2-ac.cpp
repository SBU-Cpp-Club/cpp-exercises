#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::begin;
using std::end;

// from 3.23
int main(){
   int iread;
   vector<int> v1;


   for (int i = 1; i < 11; i++){
     v1.push_back(i);
   }

   cout << "Vector = ";

   for (auto j : v1){
     cout << j << " ";
   }

   cout  << endl;

   for (auto it = v1.begin(); it != v1.end(); ++it){
     *it = 2**it;
   }

   cout << "After, Vector = ";

   for (auto j : v1){
     cout << j << " ";
   }

   cout  << endl;

   // now exercise 4.2
   //
   // a) according to the table, member selector "." has a higher 
   // precedence than "*" if it is either deref or times
   // ( * (.))
   
   // b) according to the table, the order is ".", "*" either deref or multiply, then "+".
   //  ( + ( * ( . )))

   return 0;
}



