#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){

// first way
   vector<int> v1(10);    
//   for (int i = 0; i < 10; i++){
   for (decltype(v1.size()) i = 0; i < 10; i++){   //as per example p. 104-5
      v1[i] = 42;
   }

// second way
   vector<int> v2(10,42);

//  third way 
   vector<int> v3(10);
   for (auto &j : v3){
        j = 42;
   }

   vector<int> v4;
   for (decltype(v4.size()) i = 0; i < 10; i++){   //as per example p. 104-5
      v4.push_back(42);
   }


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

   return 0;
}

