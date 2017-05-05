#include <iostream>
#include <vector>

int main() {

  std::vector<int> text {0, 1, 2, 3, 4, 5, 6, 7, 8};
  int sought = 3;

  // text must be sorted
  // beg and end will denote the range we're searching
  auto beg = text.begin(), end = text.end();
  auto mid = text.begin() + (end - beg)/2; // original midpoint

  // while there are still elements to look at and we haven't yet found sought
  while (mid != end && *mid != sought) {

    // is the element we want in the first half?
    if (sought < *mid) { 
      // if so, adjust the range to ignore the second half   
      end = mid;         
    } else {
      // the element we want is in the second half
      // start looking with the element just after mid
      beg = mid + 1;    
    }
    // new midpoint
    // subtracting two iterators gives a number, not an iterator
    mid = beg + (end - beg)/2;  

    // can't add two iterators
    //mid = (beg + end)/2;
  }

  std::cout << *mid << std::endl;

  return 0;
}
