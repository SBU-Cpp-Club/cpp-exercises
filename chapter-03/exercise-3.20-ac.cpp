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
   while (cin >> iread){
     cout << "Enter another integer or ctrl-d to end" << endl;
     v1.push_back(iread);
   }

   cout << "Vector = ";

   for (auto j : v1){
     cout << j << " ";
   }
   
   cout  << endl;

   for (auto j : v1){
   if((j != 0)&&(j % 2 == 0)) cout << v1[j-1]+v1[j-2] << endl;
   }
    
//to do- change to print sum of first and last, second and next to last, ....

   return 0;
}

