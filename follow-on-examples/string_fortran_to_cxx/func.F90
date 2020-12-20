module mymodule

  use iso_c_binding

  implicit none

  integer i
  character(len = 32) :: mystring

contains

  subroutine init() bind(C, name="init")

    i = 10
    mystring = "this is a test"

  end subroutine init

  subroutine get_i(i_out) bind(C, name="get_i")
    integer, intent(inout) :: i_out

    i_out = i

  end subroutine get_i

  subroutine get_str(mystring_out) bind(C, name="get_str")
    character(kind=c_char) :: mystring_out(*)
    integer n

    do n = 1, len(mystring)
       mystring_out(n:n) = mystring(n:n)
    end do
    mystring_out(len(mystring)+1) = char(0)

  end subroutine get_str

end module mymodule
