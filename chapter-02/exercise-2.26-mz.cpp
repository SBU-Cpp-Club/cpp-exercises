#include <iostream>

int main() {

  //const int buf;  // illegal -- not initialized
  int cnt = 0;
  const int sz = cnt;
  //++cnt; ++sz; // illegal -- sz is const

  return 0;

}
