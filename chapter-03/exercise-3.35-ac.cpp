#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;

int main()
{
  int ia[] = {0,1,2, 3, 4, 5, 6, 7, 8, 9};

  for (int i = 0; i < 10; i++)
     *(ia+i) = 0; 

  for (int i = 0; i < 10; i++)
     cout << " ia[" << i << "] = " << ia[i] << endl;

  return 0;
}

