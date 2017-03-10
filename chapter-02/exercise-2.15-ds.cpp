//
//  Purpose:   Implement solution to exercise 2.15
//  Author:    F. D. Swesty
//  Date:      2/21/2017 
//
//
using namespace std;
int main() {

  int ival = 1.01;     // Valid  definition

  // int &rval1 = 1.01 ;  // Invalid:  cannot assign reference to literal

  int &rval2 = ival;   // Valid definition

  // int &rval3;          // Invalid:  references must be initialized

  return 0;
}
