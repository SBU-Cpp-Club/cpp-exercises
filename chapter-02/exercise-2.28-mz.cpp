int main() {

  // int i, *const cp;  // illegal -- the const pointer needs to be initialized
  
  // int *p1, *const p2;  // illegal -- the const pointer needs to be initialized

  // const int ic, &r = ic;  // ic is illegal -- needs to be initialized, r would be legal is a reference to an int that is const

  // const int *const p2;  // p2 is a constant pointer to an int that is const -- this is illegal as written, since it needs to be initialized

  const int *p; // legal -- p is a pointer to an int that is constant

  return 0;

}
