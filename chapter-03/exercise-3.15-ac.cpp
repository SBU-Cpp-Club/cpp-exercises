#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main(){
   string sread;
   vector<string> v1;           

   cout << "Enter a string" << endl;
   while (std::getline(std::cin, sread)){  
     cout << "Enter another string or ctrl-d to stop" << endl;
     v1.push_back(sread);
   }

   cout << "Vector = ";

   for (auto j : v1){
     cout << j << " ";
   }
   
   cout  << endl;

   return 0;
}

