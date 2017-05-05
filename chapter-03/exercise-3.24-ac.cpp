#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main(){
   int iread;
   vector<int> v1;  


   for (int i = 0; i < 10; i++){
     cout << "Enter an integer" << endl;
     cin >> iread;
     v1.push_back(iread);
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

   return 0;
}

