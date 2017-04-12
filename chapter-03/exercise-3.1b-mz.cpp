#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

  int x = 0, y = 0;

  cout << "Enter min and max: " << endl;
  cin >> x >> y;

  // assumes the x < y
  while (x <= y) {
    cout << x << endl;
    x++;
  }

  return 0;
}
