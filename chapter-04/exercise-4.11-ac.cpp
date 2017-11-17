#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main(){
   int ia,ib,ic,id;

   cout << "Enter 4 integers in decreasing order, one at a time" << endl;
   cin >> ia;
   cin >> ib;
   cin >> ic;
   cin >> id;

   cout << "you entered " << ia << " " << ib << " " << ic << " " << id << endl;
   cout << endl;

   if(ia > ib && ib > ic && ic > id) cout << "Good job!" << endl;
   else cout << "D'oh! Try again." << endl;
   
   return 0;
}

