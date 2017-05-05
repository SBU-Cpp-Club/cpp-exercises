#include <iostream>
#include <vector>

int main() {
  // grade clustering with iterators -- not sure where they wanted them used?

  // count the number of grades by clusters of ten: 0--9, 10--19, . .. 90--99, 100

  // 11 buckets, all initially 0
  std::vector<unsigned> scores(11, 0); 
  unsigned grade;

  while (std::cin >> grade) {   
    if (grade <= 100) {      
      // increment the counter for the current cluster
      ++scores[grade/10]; 
    }
  }


  for (auto it = scores.cbegin(); it != scores.cend(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  return 0;
}
