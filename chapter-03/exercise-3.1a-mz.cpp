#include <iostream>

using std::cout;
using std::endl;

int main()
{

  int sum = 0;
  int x = 50;

  while (x <= 100) {
    sum += x;
    x += 1;
  }

  cout << "sum = " << sum << endl;

  return 0;
}
