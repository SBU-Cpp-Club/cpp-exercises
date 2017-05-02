//
//  Purpose:   Implement solution to exercise 3.21
//  Author:    F. D. Swesty
//  Date:      5/2/2017 
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
  if(v1.cbegin() != v1.cend()) {
    cout << " v1 has " << v1.size() << " elements " << endl;
    for(auto it=v1.cbegin(); it != v1.cend(); it++) {  
       cout << *it << " " ;
    }
    cout << endl;
  } else {
    cout << " v1 has no elements " << endl;
  }

  vector<int> v2(10);     // v2 has ten elements that are uninitialized
  if(v2.cbegin() != v2.cend()) {
    cout << " v2 has " << v2.size() << " elements " << endl;
    for(auto it=v2.cbegin(); it != v2.cend(); it++) {  
       cout << *it << " " ;
    }
    cout << endl;
  } else {
    cout << " v2 has no elements " << endl;
  }

  vector<int> v3(10,42);  // v3 has 10 elements with values of 42
  if(v3.cbegin() != v3.cend()) {
    cout << " v3 has " << v3.size() << " elements " << endl;
    for(auto it=v3.cbegin(); it != v3.cend(); it++) {  
       cout << *it << " " ;
    }
    cout << endl;
  } else {
    cout << " v3 has no elements " << endl;
  }


  vector<int> v4{10};     // v4 has 1 element with value 10
  if(v4.cbegin() != v4.cend()) {
    cout << " v4 has " << v4.size() << " elements " << endl;
    for(auto it=v4.cbegin(); it != v4.cend(); it++) {  
       cout << *it << " " ;
    }
    cout << endl;
  } else {
    cout << " v4 has no elements " << endl;
  }

  vector<int> v5{10,42};  // v5 has 2 elements with values 10 and 42
  if(v5.cbegin() != v5.cend()) {
    cout << " v5 has " << v5.size() << " elements " << endl;
    for(auto it=v5.cbegin(); it != v5.cend(); it++) {  
       cout << *it << " " ;
    }
    cout << endl;
  } else {
    cout << " v5 has no elements " << endl;
  }

  vector<string> v6{10};  // v6 has 10 elements that are unitialized
  if(v6.cbegin() != v6.cend()) {
    cout << " v6 has " << v6.size() << " elements " << endl;
    for(auto it=v6.cbegin(); it != v6.cend(); it++) {  
       cout << *it << " " ;
    }
    cout << endl;
  } else {
    cout << " v6 has no elements " << endl;
  }

  vector<string> v7{10,"hi"};  // v7 has 10 elements that are itialized to "hi"
  if(v7.cbegin() != v7.cend()) {
    cout << " v7 has " << v7.size() << " elements " << endl;
    for(auto it=v7.cbegin(); it != v7.cend(); it++) {  
       cout << *it << " " ;
    }
    cout << endl;
  } else {
    cout << " v7 has no elements " << endl;
  }

  return 0;   // Stop
}
