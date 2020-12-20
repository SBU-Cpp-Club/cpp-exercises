#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;

int main()
{
  int i = 0;
  cout << i << " " << ++i << endl;
  cout << i << " " << ++i << endl;

  return 0;
}

// I see it as a pitfall in that what good is optimizing if you don't 
// know what you will get?

