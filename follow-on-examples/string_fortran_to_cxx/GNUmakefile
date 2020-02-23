FSOURCES = func.F90
CSOURCES = main.cpp

OBJS = $(FSOURCES:.o=.F90) $(CSOURCES:.o=.cpp)

main: $(OBJS)
	g++ -o main $(OBJS)

%.o:%.cpp
	g++ -c $<

%.o:%.F90
	gfortran -c $<
