#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main(){
   vector<unsigned> scores(11,0);  
   unsigned grade;

   while (cin >> grade){
     if (grade <= 100)
         ++scores[grade/10];
   }

   cout << "Grades in bins = ";

//   for (auto j : scores){
//    
//     for (auto it = scores.begin(); it != scores.end() && !it->empty(); ++it){
     for (auto it = scores.begin(); it != scores.end(); ++it){
     cout << *it << " ";
   }
   
   cout  << endl;

   return 0;
}

