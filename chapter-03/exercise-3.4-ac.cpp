#include<iostream>
using std::cout;
using std::endl;
using std::string;

int main(){
   string s1, s2;

   cout << s1 << endl; // see what an uninitialized string looks like

   getline(std::cin,s1);
   cout << s1 << endl;

   getline(std::cin,s2);
   cout << s2 << endl;

   if (s1 == s2)
      cout << "strings are equal" << endl;
   else
      {
      cout << "strings are not equal" << endl;
      if (s1 > s2)
      cout << s1 << " is greater than " << s2 << endl;
      if (s2 > s1)
      cout << s2 << " is greater than " << s1 << endl;
      }

   return 0;
}

