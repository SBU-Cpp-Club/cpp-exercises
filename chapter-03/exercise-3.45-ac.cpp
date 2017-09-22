#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::begin;
using std::end;


int main()
{
 
   int ia[3][4] = { 
       {0, 1, 2, 3},
       {4, 5, 6, 7},
       {8, 9,10,11}
   };
 
   cout << endl;
   cout << "with range for and auto" << endl;
 
   for(auto &row : ia)
      for(auto &col : row)
         cout << col << endl;

   cout << endl;
   cout << "with auto and subscripts" << endl;
   
   constexpr size_t rowCnt = 3, colCnt = 4;

//   is using auto like this sporting?
   for (auto i = 0; i != rowCnt; ++i) {
       for (auto j = 0; j != colCnt; ++j) 
          cout << ia[i][j] << endl; 
   }

   cout << endl;
   cout << "with auto and pointers" << endl;
   
   for (auto p = std::begin(ia); p < std::end(ia); ++p) {
     for (auto q = std::begin(*p); q < std::end(*p); ++q) {
       cout << *q << endl;
     }
   }

   return 0;
}

