#include <iostream>
#include <string>
#include <vector>
#include <cctype>

// use this with lorem.txt

int main() {

  std::string word;
  std::vector<std::string> word_list;

  while (std::cin >> word) {
    word_list.push_back(word);
  }

  for (auto &w : word_list) {
    for (auto &c : w) {
      c = toupper(c);
    }
  }

  for (decltype(word_list.size()) n = 0; n < word_list.size(); ++n) {
    std::cout << word_list[n] << " ";
    if ((n+1) % 8 == 0) {
      std::cout << std::endl;
    }
  }
    

  return 0;
}
