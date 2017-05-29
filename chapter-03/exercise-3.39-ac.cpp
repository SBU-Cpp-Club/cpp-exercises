#include<iostream>
#include<cstring>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{

// first C-string comparison

  const char ca[] = {'h', 'e', 'l', 'l', 'o'};
  const char cb[] = {'h', 'e', 'l', 'l', 'o'};
  const char cc[] = {'g', 'o', 'o', 'd', 'b', 'y', 'e'};

  cout << "ca = " << ca << endl;
  cout << "cb = " << cb << endl;
  cout << "cc = " << cc << endl;

  if (strcmp(ca, cb) != 0) 
      cout << "ca and cb are different" << endl;

  if (strcmp(ca, cc) != 0) 
      cout << "ca and cc are different" << endl;

// now the string part

  string s1("hello");
  string s2("goodbye");
 
  if(s1 == s2) cout << "strings are equal" << endl;
  if(s1 != s2) cout << "strings are not equal" << endl;

  return 0;
}

