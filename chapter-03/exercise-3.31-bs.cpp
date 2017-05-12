#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;


int main()
{

  constexpr size_t size = 10;

  int ia[size];

  for (size_t ix = 0; ix < size; ++ix) 
    ia[ix] = ix;                              

  for (auto i : ia)
    cout<< i << " ";

  cout<<endl;

  return 0;
}
