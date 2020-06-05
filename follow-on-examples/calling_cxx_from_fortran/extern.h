#ifndef EXTERN_H
#define EXTERN_H

extern double x;

extern "C" {

  void do_fortran();

  void set_x_cxx(double* x);

}

#endif
