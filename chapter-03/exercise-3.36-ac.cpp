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

//   int k = 0;
//   for (auto it = v1.begin(); it != v1.end(); ++it){
//     if(it != v2[k])
//         cout  << " vectors differ at element " << k << endl;
//     ++k;
//   }

   int j = 0;
   for (decltype (v1.size()) it = 0; it != 10; ++it){
     if(it != v2[j])
         cout  << " vectors differ at element " << j << endl;
     ++j;
   }

  return 0;
}

