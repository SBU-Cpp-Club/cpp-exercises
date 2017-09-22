#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::begin;
using std::end;

 // alias declaration - use this or the using above
using int_array = int[4];

int main()
{

 // typedef- use this or the using above
  // typedef int int_array[4];
 
   int ia[3][4] = { 
       {0, 1, 2, 3},
       {4, 5, 6, 7},
       {8, 9,10,11}
   };
 
   cout << endl;
   cout << "with range for" << endl;
 
   for(const int_array &row : ia)
  
  //why does it not like size_t here?
    //  for(sizet col : row)
      for(const int col : row)
         cout << col << endl;

   cout << endl;
   cout << "with for and subscripts" << endl;
   
   constexpr size_t rowCnt = 3, colCnt = 4;

  //why does it not like size_t here?
  // for (size_t i = 0; i != rowCnt; ++i) {
  //     for (size_t j = 0; j != colCnt; ++j) 
   for (int i = 0; i != rowCnt; ++i) {
       for (int j = 0; j != colCnt; ++j) 
          cout << ia[i][j] << endl; 
    }

   cout << endl;
   cout << "with for and pointers" << endl;

   for (int_array *p = ia; p != ia + rowCnt; ++p) {
       for (int *q = *p; q != *p + colCnt; ++q) 
         cout << *q << endl; 
    }

   return 0;
}

