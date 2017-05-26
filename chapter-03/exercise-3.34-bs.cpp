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
  int *p1 = &ia[5];
  int *p2 = &ia[8];


  p1 += p2 - p1; // so in this case p2-p1 will distance between p1 and p2
                 // then p1 will point at the same element that p2 is pointing at 
		 //

  cout<< *p1;
  
  cout<<endl;

  return 0;
}
