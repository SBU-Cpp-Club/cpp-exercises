#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
//  const char ca[] = {'h', 'e', 'l', 'l', 'o'};
  const char ca[] = {'h', 'e', 'l', 'l', 'o', '\0'};
  const char *cp = ca; 

  while (*cp) {
      cout  << *cp << endl;
      ++cp;
  }

  return 0;
}

