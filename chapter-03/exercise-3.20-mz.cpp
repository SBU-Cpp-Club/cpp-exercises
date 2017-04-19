#include <vector>
#include <iostream>

int main() {

  std::vector<int> int_list;
  int n;

  while (std::cin >> n) {
    int_list.push_back(n);
  }

  // sum each pair of adjacent elements -- we start at one, and we'll
  // sum the current and previous elements
  for (decltype(int_list.size()) i = 1; i < int_list.size(); ++i) {
    std::cout << int_list[i-1] << " + " << int_list[i] << " = " << int_list[i-1] + int_list[i] << std::endl;
  }

  std::cout << std::endl;

  // now sum the first and last, then the second and second-to-last, ...
  // need to be careful about an odd number of elements -- don't add to ourself
  for (decltype(int_list.size()) i = 0; i < int_list.size()/2; ++i) {
    auto k = int_list.size() - i - 1;
    std::cout << int_list[i] << " + " << int_list[k] << " = " << int_list[i] + int_list[k] << std::endl;
  }  
  return 0;

}
