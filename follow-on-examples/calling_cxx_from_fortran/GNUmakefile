CPP_FILES := $(wildcard *.cpp)
F_FILES := $(wildcard *.f90)

FOBJS = $(F_FILES:.f90=.o)
CPPOBJS = $(CPP_FILES:.cpp=.o)

%.o : %.cpp
	g++ -c $<

%.o : %.f90
	gfortran -c $<

H_FILES := $(wildcard *.h)

main: ${FOBJS} ${CPPOBJS} ${H_FILES}
	g++ -o main ${FOBJS} ${CPPOBJS} -lgfortran


