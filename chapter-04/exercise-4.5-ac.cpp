#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;

int main()
{
 cout << "ACC guess = " << (-30 * 3) + (21 / 5) << " -86" << endl;
 cout << -30 * 3 + 21 / 5 << endl;
 cout << "ACC guess = " << -30 + (3 * 21 / 5) << " -18" << endl;
 cout << -30 + 3 * 21 / 5 << endl;
 cout << "ACC guess = " << ((30 / 3 * 21) % 5) << " 0" << endl;
 cout << 30 / 3 * 21 % 5 << endl;
 cout << "ACC guess = " << ((-30/3 * 21)%4) << " -2" << endl;
 cout << -30 / 3 * 21 % 4 << endl;

  return 0;
}

