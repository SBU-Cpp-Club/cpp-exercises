int main() {

  int i = -1;
  // int &r = 0;   // legal?  (&r should be const int)
  
  int i2;
  int *const p2  = &i2;  // legal -- this is a constant pointer to an int

  //const int ii = -1, &r = 0; // legal -- r is a reference to an int that is constant

  const int *const p3 = &i2; // legal, even though i2 is not const, we will not be allowed to modify i2 through p3

  const int *p1 = &i2; // legal, p1 will always point to i2, but we can't modify i2 through p1

  // const int &const r2; // illegal, needs to be initialized, references are always 'const' in a sense

  const int ii2 = i, &r = i;  // legal, we will not be able to modify i through r though
  

  return 0;

}
