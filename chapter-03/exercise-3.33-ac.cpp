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

   // thinking is that the ranged for is a safer way to go through the whole
   // array as there is no chance to go out of bounds.
   for (auto i : scores) // i here is the element of the array, not an index!
   cout << i << " ";    

   //for (int i=0; i < 11; ++i)
   //  cout << scores[i] << " ";
   
   cout  << endl;

   return 0;
}

