#include<iostream>
using std::cout;
using std::endl;
using std::string;

int main(){
   string s1, s2, s3, s4;
//   char c;                 Why !

   getline(std::cin,s1);
   cout << s1 << endl;

   for (char c : s1) {
   c = 'X';
   }

   cout << "After " << s1 << endl;  // no change because not a reference

   return 0;
}

