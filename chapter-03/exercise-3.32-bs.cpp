#include<vector>
#include<iostream>
#include<string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{

  constexpr size_t size = 10;

  int ia[size] = {0,1,2,3,4,5,6,7,8,9};
  int copy[size];


  //array version of making a copy of ia
  for (size_t ix = 0; ix < size; ++ix) 
    copy[ix] = ia[ix];                              

  for (auto i : copy)
    cout<< i << " ";

  cout<<endl;

 //vector version
  vector<int> v;

  for (int i = 0; i<10; i++)
      v.push_back(i);

  vector<int> copyv = v;

  for (auto i: copyv)
    cout<< i <<" ";
  
  cout<<endl;

  return 0;
}
