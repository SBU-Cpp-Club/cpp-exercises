#include<iostream>
#include<cstring>
using std::cout;
using std::cin;
using std::endl;
using std::strcpy;
using std::strcat;

int main()
{
  const char ca1[] = "thing1";
  const char ca2[] = "thing2";
 
  int l1,l2;

  l1 = strlen(ca1);
  l2 = strlen(ca2);

  cout << l1 << endl;
  cout << l2 << endl;

  char  largeStr[l1+l2];

  strcpy(largeStr, ca1);
//  strcpy(largeStr, " ");  //add to play with wrong size
  strcat(largeStr, ca2);
 
  for (auto i :largeStr) 
      cout  << i;
  cout  << endl;

  return 0;
}

