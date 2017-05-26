#include<iostream>
#include<cstring>
using std::cout;
using std::cin;
using std::endl;

int main()
{
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

  return 0;
}

