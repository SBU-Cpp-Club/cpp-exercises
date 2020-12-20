#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::begin;
using std::end;

// from 3.23
int main(){
   int iread;
   vector<int> v1;
   vector<int*> pv1;


   for (int i = 0; i < 10; i++){
     v1.push_back(i);
   }

   cout << "Vector = ";

   for (auto j : v1){
     cout << j << " ";
   }

   cout  << endl;

   for (auto it = v1.begin(); it != v1.end(); ++it){
     *it = 2**it;
   }

   cout << "After, Vector = ";

   for (auto j : v1){
     cout << j << " ";
   }

   cout  << endl;

// note in discussion 11/3/17- need a vector of pointers to dereference.
//   vector<int*> vp1;

   int j = 0;
   for (int i = 0; i < 10; i++){
//     pv1.push_back(new int);
//     mike suggestion initialize to something:
     pv1.push_back(&j);
   }
   // now exercise 4.2
   //
   // a) according to the table, member selector "." has a higher 
   // precedence than "*" if it is either deref or times
   // ( * (.))
   
   // b) according to the table, the order is ".", "*" either deref or multiply, then "+".
   //  ( + ( * ( . )))

   cout << "Now to do the problem: " << endl;
   cout << *(pv1.begin()) << endl;
   cout << ((*pv1.begin()) + 1) << endl;

   for (int i = 0; i < 10; i++){
       pv1[i] = &v1[i];
       }

   cout << "After creating and assigning vector array, pv1 = " << endl;

   for (auto j : pv1){
     cout << j << " ";
   }

   cout  << endl;

//  below incromulent
//   cout << "After creating and assigning vector array, &pv1 = " << endl;
//
//   for (auto j : pv1){
//     cout << j << " ";
//   }
//
//   cout  << endl;

   for (int i = 0; i < 10; i++){
       cout << pv1[i] << " ";
       }
   cout  << endl;

   for (int i = 0; i < 10; i++){
       cout << *pv1[i] << " ";
       }
   cout  << endl;

   cout << "finally, look again at the problem" << endl;
   cout << "address followed by dereference" << endl;
   cout << *pv1.begin() << endl;
   cout << *(*pv1.begin()) << endl;
   cout << (*pv1.begin()) + 1 << endl;
   cout << *((*pv1.begin()) + 1) << endl;

   return 0;

}



