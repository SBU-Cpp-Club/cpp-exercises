#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;

int main()
{
  int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int *p1 = &ia[3];
  int *p2 = &ia[3];

  p1 += p2 - p1;

  cout << " p1 p2 = " << p1 << " " << p1 << endl;
  cout << " derefed: *p1 *p2 = " << *p1 << " " << *p2 << endl;
  cout << endl;

  return 0;
}

