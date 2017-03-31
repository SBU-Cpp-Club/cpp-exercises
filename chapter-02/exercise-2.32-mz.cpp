#include <iostream>

int main() {

  // illegal as written because null is not const
  // int null = 0;
  // int *p = null;

  // see https://stackoverflow.com/questions/24213159/how-to-initialize-a-pointer-using-an-object-with-0-value

  constexpr int null = 0;

  // it is suggested that this is legal, since the + unary operator
  // turns it into a PR value, but this seems to have changed

  //int *p = +null;

  // this turns null into a prvalue and therefore is legal
  int *p = static_cast<int>(null);

  return 0;

}
