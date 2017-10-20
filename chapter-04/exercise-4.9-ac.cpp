#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
  const char *cp = "Hello, World!";

  cout << "cp = " << cp << endl;
  cout << "*cp = " << *cp << endl;
  
  if (cp && *cp) cout << "in if" << endl;
  else
  cout << "not in if" << endl;

  return 0;
}

