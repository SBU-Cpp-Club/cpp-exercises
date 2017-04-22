#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
   vector<vector<int>> ivec; // legal- a vector of vectors?
//
//   vector<string> svec = ivec;  // not legal due to type mismatch

   vector<string> svec(10,"null"); //legal declaring and assigning

   return 0;
}

