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
   cout << "with range for" << endl;
 
   for(auto &row : ia)
      for(auto &col : row)
         cout << col << endl;

   cout << endl;
   cout << "with for and subscripts" << endl;
   
   constexpr size_t rowCnt = 3, colCnt = 4;

   for (size_t i = 0; i != rowCnt; ++i) {
       for (size_t j = 0; j != colCnt; ++j) 
          cout << ia[i][j] << endl; 
    }

   cout << endl;
   cout << "with for and pointers" << endl;
   
   int (*p)[4] = ia;

   for (size_t i = 0; i != rowCnt; ++i) {
    //   cout << "i = " << i << endl;
       p++;
       for (size_t j = 0; j != colCnt; ++j) 
         cout << (*p)[j] << endl; 
         // cout << *p << endl; 
    }

   return 0;
}

