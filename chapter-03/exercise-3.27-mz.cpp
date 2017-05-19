#include <iostream>

constexpr int text_size() {
  return 10;
}

int main() {

  unsigned buf_size = 1024;
  
  // not const expr
  //int ia0[buf_size];

  int ia1[4*7-14];

  // not a constexpr
  int ia2[text_size()];

  // too short -- can't hold null
  //char st[11] = "fundamental";
  char st[12] = "fundamental";

  return 0;

}
