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
   for (auto it = v1.begin(); it != v1.end(); ++it){
     cout << *it << " ";
   }

   cout << endl;

   cout << "v2: " << v2.size() << ", ";
   for (auto it = v2.begin(); it != v2.end(); ++it){
     cout << *it << " ";
   }

   cout << endl;

   cout << "v3: " << v3.size() << ", ";
   for (auto it = v3.begin(); it != v3.end(); ++it){
     cout << *it << " ";
   }

   cout << endl;

   cout << "v4: " << v4.size() << ", ";
   for (auto it = v4.begin(); it != v4.end(); ++it){
     cout << *it << " ";
   }

   cout << endl;

   cout << "v5: " << v5.size() << ", ";
   for (auto it = v5.begin(); it != v5.end(); ++it){
     cout << *it << " ";
   }

   cout << endl;

   cout << "v6: " << v6.size() << ", ";
   cout << "\"";
   for (auto it = v6.begin(); it != v6.end(); ++it){
     cout << *it << " ";
   }
   cout <<"\"";

   cout << endl;

   cout << "v7: " << v7.size() << ", ";
   for (auto it = v7.begin(); it != v7.end(); ++it){
     cout << *it << " ";
   }

   cout << endl;

   return 0;
}

