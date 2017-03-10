int main() {

  int i, *const cp = &i;  // illegal -- the const pointer needs to be initialized
  
  int *p1, *const p2 = p1;  // illegal -- the const pointer needs to be initialized

  const int ic = 0, &r = ic;  // ic is illegal -- needs to be initialized, r would be legal is a reference to an int that is const

  const int *const p3 = &ic;  // p2 is a constant pointer to an int that is const -- this is illegal as written, since it needs to be initialized

  const int *p; // legal -- p is a pointer to an int that is constant


  i = ic;  // legal

  //p1 = p3; // illegal, we can't assign an int* to a constant pointer 

  //p1 = &ic; // illegal, ic is const

  //p3 = &ic; // illegal -- p3 is a const pointer, so it cannot be reassigned

  //p2 = p1; // illegal, p2 is a const pointer, so it cannot be reassigned

  //ic = *p3; // illegal, ic is const

  return 0;

}
