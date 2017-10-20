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


   cout << "Enter an integer" << endl;
   while (cin >> iread && iread != 42){
     cout << "Enter another integer or ctrl-d to end" << endl;
     v1.push_back(iread);
   }

   cout << "Vector = ";

   for (auto j : v1){
     cout << j << " ";
   }
 
   cout << endl;
   
   return 0;
}

