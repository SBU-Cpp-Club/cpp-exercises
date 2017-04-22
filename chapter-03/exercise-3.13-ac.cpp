#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
   vector<int> v1;             // text says no elements. That means empty?
   vector<int> v2(10);         // 10 elements
   vector<int> v3(10,42);      // 10 elements all 42
   vector<int> v4{10};         // 1 element
   vector<int> v5{10,42};      // 2 elements
   vector<string> v6{10};      // 10 elements
   vector<string> v7{10,"hi"}; // 10 elements all "hi"

   return 0;
}

