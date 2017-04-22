#include<iostream>
using std::cout;
using std::endl;
using std::string;

int main(){
   string s1;  // initialize to empty string.

   getline(std::cin,s1);
   cout << "input string = " << s1 << endl;

   for (auto c : s1) {
      if (!ispunct(c)) cout << c << endl;
   }

   return 0;
}

