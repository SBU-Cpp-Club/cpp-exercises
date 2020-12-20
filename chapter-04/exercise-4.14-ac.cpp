#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main(){
   int i;

   i = 42;
  // won't work as 42 not an l value? 
   //if (42 = i) cout << "42 = i" << endl;

  // problem because it is an assingment? May return 0?
   if (i = 42) cout << "i = 42" << endl;
   cout << (i = 42) << endl;

   return 0;
}

