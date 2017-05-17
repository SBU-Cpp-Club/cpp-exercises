#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main(){
   unsigned scores[11] = {};  
   //unsigned scores[11];   //barfs. Due to being uninitialized, ++scores is not meaningful (?)
   unsigned grade;

   while (cin >> grade){
     if (grade <= 100)
         ++scores[grade/10];
   }

   cout << "Grades in bins = ";

   //for (auto i : scores) //bizarre that this compiles and runs but gets wrong answer.
   for (int i=0; i < 11; ++i)
     cout << scores[i] << " ";
   
   cout  << endl;

   return 0;
}

