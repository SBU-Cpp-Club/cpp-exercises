#include<iostream>
using std::cout;
using std::endl;
using std::string;

int main(){
   string s1, s2;

   getline(std::cin,s1);
   cout << s1 << endl;

   getline(std::cin,s2);
   cout << s2 << endl;

   cout << "First check equality and size(?)" << endl;

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

   cout << "Now check length" << endl;

      auto len1 = s1.size();
      auto len2 = s2.size();

   if (len1 == len2)
      cout << "strings are of same lenght" << endl;
   else
      {
      if (len1 > len2)
      cout << len1 << " is longer than " << s2 << endl;
      if (len2 > len1)
      cout << s2 << " is longer than " << s1 << endl;
      }

   return 0;
}

