#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main(){
   string word;
   vector<string> vecWords;           

   cout << "Enter a word" << endl;
   while (std::getline(std::cin, word)){  
     cout << "Enter another word or ctrl-d to stop" << endl;
     vecWords.push_back(word);
   }

   cout << "To start, the words are:" << endl;

   for (auto j : vecWords){
     cout << j << " ";
   }
   
   cout  << endl;

// toupper works on characters in a string
   for (auto &i : vecWords){
      for (auto &j : i){
        j = toupper(j);
      }
   }

   cout << "After, the words are, in groups of eight:" << endl;

   int i = 0;
   for (auto j : vecWords){
     i++;
     cout << j;
     if(i % 8 == 0) cout << endl;
     else cout  << " ";
   }
   
   cout  << endl;

   return 0;
}

