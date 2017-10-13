#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;

int main()
{
cout  << "Enter an integer:" << std::endl;
int i = 0;
cin >> i;
if (i%2 == 0) {
           cout << "Your integer was even" << endl;
       } else {
           cout << "Your integer was odd" << endl;
           return -1;
       }
  return 0;
}

