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

   cout << "Size and content of the vectors" << endl;
   
   cout << "v1: " << v1.size() << ", ";
   for (auto j : v1){
     cout << j << " ";
   }

   cout << endl;

   cout << "v2: " << v2.size() << ", ";
   for (auto j : v2){
     cout << j << " ";
   }

   cout << endl;

   cout << "v3: " << v3.size() << ", ";
   for (auto j : v3){
     cout << j << " ";
   }

   cout << endl;

   cout << "v4: " << v4.size() << ", ";
   for (auto j : v4){
     cout << j << " ";
   }

   cout << endl;

   cout << "v5: " << v5.size() << ", ";
   for (auto j : v5){
     cout << j << " ";
   }

   cout << endl;

   cout << "v6: " << v6.size() << ", ";
   cout << "\"";
   for (auto j : v6){
     cout << j << " ";
   }
   cout <<"\"";

   cout << endl;

   cout << "v7: " << v7.size() << ", ";
   for (auto j : v7){
     cout << j << " ";
   }

   cout << endl;

   return 0;
}

