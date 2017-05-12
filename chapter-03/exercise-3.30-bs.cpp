#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;


int main()
{

  constexpr size_t array_size = 10;

  int ia[array_size];

  for (size_t ix = 1; ix <= array_size; ++ix) //error is that indices should go from 0 to size-1
    ia[ix] = ix;                              //instead of 1 to size

  for (auto i : ia)
    cout<< i << " ";

  cout<<endl;

  return 0;
}
