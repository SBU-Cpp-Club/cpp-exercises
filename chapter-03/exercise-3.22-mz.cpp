#include <iostream>
#include <vector>
#include <cctype>

int main() {

  // read in the data
  std::string l;
  std::vector<std::string> lines;

  while (getline(std::cin, l)) {
    lines.push_back(l);
  }

  // update first paragraph to caps
  for (auto it = lines.begin(); it != lines.end() && !it->empty(); ++it) {
    // loop over the elements in the line
    for (auto it2 = it->begin(); it2 != it->end(); ++it2) {
      *it2 = toupper(*it2);
    }
  }

  // output all lines
  for (auto it = lines.cbegin(); it != lines.cend(); ++it) {
    std::cout << *it << std::endl;
  }

  return 0;
}
