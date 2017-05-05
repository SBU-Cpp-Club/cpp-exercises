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
  for (auto it = int_list.begin()+1; it != int_list.end(); ++it) {
    auto pit = it - 1;
    std::cout << *pit << " + " << *it << " = " << *pit + *it << std::endl;
  }

  std::cout << std::endl;

  // now sum the first and last, then the second and second-to-last, ...
  // need to be careful about an odd number of elements -- don't add to ourself
  auto mid = int_list.begin() + int_list.size() / 2;
  auto end = int_list.end();
  for (auto it = int_list.begin(); it != mid+1; ++it) {
    end--;
    std::cout << *it << " + " << *end << " = " << *it + *end << std::endl;
  }  
  return 0;

}
