//
//  Purpose:   Implement solution to exercise 2.26
//  Author:    F. D. Swesty
//  Date:      3/9/2017 
//
//
#include <iostream>
using namespace std;
int main() {

  // const int buf;     // Illegal.  A const must be initialized

  int cnt = 0 ;         // Legal

  const int SZ = cnt;   // Legal

  ++cnt;                // Legal

  // ++SZ               // Illegal.   Cannot assign to a const at runtime.

  return 0;
}
