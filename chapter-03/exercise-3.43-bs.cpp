#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{


   constexpr size_t rowCnt = 3, colCnt = 4;
   int ia[rowCnt][colCnt] = {0,1,2,3,4,5,6,7,8,9,10,11};   

   // version one --- using range for

   for (const int (&row)[4] : ia)
     for (size_t col : row)
       cout << col << endl;
 
  //version two --- for loop with subscripts
   for (size_t i = 0; i != rowCnt; i++){
     for(size_t j = 0; j != colCnt; j++){
       cout << ia[i][j] << endl; 
     }
   }

  //version three --- for loop with pointers
 
   // int (*p)[4] ---- pointer to an array of four ints
    for (int (*p) [colCnt] = ia; p < ia + rowCnt; ++p){
      for(int *q = *p; q < *p + colCnt; ++q){
        cout << *q << endl;
      }
    }

   return 0;

}
