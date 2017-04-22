#include<iostream>
using std::cout;
using std::endl;
using std::string;

int main(){
   string s1, s2, s3, s4;

   getline(std::cin,s1);
   cout << s1 << endl;

   getline(std::cin,s2);
   cout << s2 << endl;

   s3 = s1 + s2;

   cout << "concatinated gives " << s3 << endl;

   s4 = s1 + " " + s2;

   cout << "concatinated with a space " << s4 << endl;

   return 0;
}

