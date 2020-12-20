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
/*
 * Cribbing from the book: Short circuit evaluation
 * The right side of an && is evaluated if and only if the left side is true
 * The right side of an || is evaluated if and only if the left side is true
 *
 * Try this with an assignment:
*/

  bool test1 = false;
  bool test2 = true;
  bool test3 = 0;
  bool test4 = 1;
  int icount = 0;
 
  cout << "test1 = " << test1 << endl;
  cout << "test2 = " << test2 << endl;
  cout << "test3 = " << test3 << endl;
  cout << "test4 = " << test4 << endl;


  if(test1 == true && ++icount == 1)
  {
    cout << "in logical test block 1 icount = " << icount << endl;
  }

  cout << "after logical test block 1 icount = " << icount << endl;

  if(test2 == true && ++icount == 1)
  {
    cout << "in logical test block 2 icount = " << icount << endl;
  }

  cout << "after logical test block 2 icount = " << icount << endl;

  return 0;
}

