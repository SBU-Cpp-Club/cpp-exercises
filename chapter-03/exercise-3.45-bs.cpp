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

   for (const auto &row : ia)
     for (auto col : row)
       cout << col << endl;
 
  //version two --- for loop with subscripts
   for (auto i = 0; i != rowCnt; i++){
     for(auto j = 0; j != colCnt; j++){
       cout << ia[i][j] << endl; 
     }
   }

  //version three --- for loop with pointers
  
    for (auto p = std::begin(ia); p != std::end(ia); ++p){
      for(auto q = std::begin(*p); q != std::end(*p); ++q){
        cout << *q << endl;
      }
    }

   return 0;

}
