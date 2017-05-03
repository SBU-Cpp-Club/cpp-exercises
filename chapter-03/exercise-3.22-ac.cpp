#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main(){

  string line;
  vector<string> text;

    while (getline(cin, line)) {
       text.push_back(line);
  }

   cout << "First the whole 2 paragraph ipsum" << endl;
   cout << endl;

   for (auto it = text.begin(); it != text.end(); ++it){
     cout << *it << endl;
//     if(i % 8 == 0) cout << endl;
   }

   cout << "Now just the first paragraph" << endl;
   cout << endl;

   for (auto it = text.begin(); it != text.end() && !it->empty(); ++it){
     cout << *it << endl;
   }

   return 0;
}

