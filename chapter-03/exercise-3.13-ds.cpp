//
//  Purpose:   Implement solution to exercise 3.13
//  Author:    F. D. Swesty
//  Date:      4/28/2017 
//
//
#include <iostream>
#include <string>
#include <vector>

using std::cout;   // Bring in cout from the standard namespace
using std::endl;   // Bring in endl from the standard namespace
using std::string; // Bring in string from the standard namespace
using std::vector; // Bring in vector from the standard namespace

int main() {

  vector<int> v1;         // No elements in this vector
  cout << v1.size() << endl;

  vector<int> v2(10);     // v2 has ten elements that are uninitialized
  cout << v2.size() << endl;

  vector<int> v3(10,42);  // v3 has 10 elements with values of 42
  cout << v3.size() << endl;

  vector<int> v4{10};     // v4 has 1 element with value 10
  cout << v4.size() << endl;

  vector<int> v5{10,42};  // v5 has 2 elements with values 10 and 42
  cout << v5.size() << endl;

  vector<string> v6{10};  // v6 has 10 elements that are unitialized
  cout << v6.size() << endl;

  vector<string> v7{10,"hi"};  // v7 has 10 elements that are itialized to "hi"
  cout << v7.size() << endl;

  return 0;   // Stop
}
