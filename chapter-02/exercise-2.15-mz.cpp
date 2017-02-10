int main() {

  int ival = 1.01;   // okay
  //int &rval1 = 1.01; // not okay, can't ref a literal
  int &rval2 = ival; // okay
  //int &rval3;        // not okay -- need to initialize

}
