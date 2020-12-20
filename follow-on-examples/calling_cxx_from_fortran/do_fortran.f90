module cfuncs
  interface
    subroutine set_x_cxx(x) bind(C, name="set_x_cxx")
      use , intrinsic :: iso_c_binding, only: c_double
      real(c_double) :: x
    end subroutine set_x_cxx
 end interface
end module cfuncs


subroutine do_fortran() bind(C)

  use iso_c_binding, only : c_double
  use cfuncs

  real(kind=c_double) :: x

  print *, "in fortran"

  x = 1.0

  call set_x_cxx(x)

end subroutine do_fortran
