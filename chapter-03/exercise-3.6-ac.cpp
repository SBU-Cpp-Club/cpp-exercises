#include<iostream>
using std::cout;
using std::endl;
using std::string;

int main(){
   string s1, s2, s3, s4;

   getline(std::cin,s1);
   cout << s1 << endl;

   for (auto &c : s1) {
   c = 'X';
   }

   cout << "After " << s1 << endl;

   return 0;
}

