#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
  int ia[] = {0,1,2, 3, 4, 5, 6, 7, 8, 9};
  int ib[] = {0,1,5, 3, 4, 5, 7, 7, 8, 9};

// doesn't use pointers. How should I have done it?
  for (int i = 0; i < 10; i++)
     if(ia[i] != ib[i])
         cout  << " arrays differ at element " << i << endl;


   vector<int> v1;  
   vector<int> v2; 

   for (int i = 0; i != 10; ++i){
        v1.push_back(i);
        v2.push_back(i);
   }

   v2[2] = 5;
   v2[6] = 7;

//   v2.at(2) = 5;
//   v2.at(6) = 7;

// with range for
   decltype (v1.size()) k = 0;
   for (auto it : v1){
     if(it != v2[k])
         cout  << " vectors differ at element " << k << endl;
     ++k;
   }

// with regular for  (this works, just commented out)
//   decltype (v1.size()) j = 0;
//   for (decltype (v1.size()) it = 0; it != 10; ++it){
//      if(it != v2[j])
//          cout  << " vectors differ at element " << j << endl;
//      ++j;
//    }

  return 0;
}

