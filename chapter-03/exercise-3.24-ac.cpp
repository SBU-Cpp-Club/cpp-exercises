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

   cout << "First the sum of each pair of adjacent elements" << endl;

   for (auto j : v1){
   if((j != 0)&&(j % 2 == 0)) cout << v1[j-1]+v1[j-2] << endl;
   }
    
   cout << "The the sum of first and last, 2nd and 2nd from last,..." << endl;
   cout << "size of v1 = " << v1.size() << endl;
   cout << "size of v1/2 = " << v1.size()/2 << endl;

   auto beg = v1.begin(), end = v1.end();
   auto mid = v1.begin() + (end - beg)/2;

   for(decltype(v1.size()) j = 0; j <= (v1.size()/2 - 1); ++j)
{
   cout << "j = " << j << " sum = " << v1[j]+v1[v1.size()-(j+1)] << endl;
   }

   return 0;
}

