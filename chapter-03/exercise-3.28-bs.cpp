#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

string sa[10]; //empty strings
int ia[10]; //zeroes 

int main()
{

  
  string sa2[10]; // empty strings
  int ia2[10]; //undefined values, since it is inside fncn p.113 & 44

  for (auto i : sa)
    cout << i << " ";

  cout<<endl;
  
  for (auto i : sa2)
    cout << i << " ";

  cout<<endl;

  for (auto i : ia)
    cout << i << " ";

  cout<<endl;

  for (auto i : ia2)
    cout << i << " ";

  cout<<endl;

}
