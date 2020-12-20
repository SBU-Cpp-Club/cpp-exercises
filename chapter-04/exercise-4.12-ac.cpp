#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main(){
   int i,j,k;

   i = 1;
   j = 2;
   k = 3;

  // relationals return a bool. 
  // short circuit- will test left first?
  
  // why isn't this 1 or true?
   cout << (i != j < k) << endl;

  // should be 1
   cout << (i != j) << endl;
   
   return 0;
}

