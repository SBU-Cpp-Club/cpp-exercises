//
//  Purpose:   Implement solution to exercise 2.16
//  Author:    F. D. Swesty
//  Date:      2/21/2017 
//
//
using namespace std;
int main() {

  int i=0, &r1=i;
  double d=0.0, &r2=d;

  r2 = 3.14159;   // Valid:  assigns 3.14159 to d

  r2 = r1 ;       // Valid:  assigns value stored in i to d

  i = r2;         // Valid:  assigns value stored in d to i

  r1 = d;         // Valid:  assigns value stored in d to i

  return 0;
}
