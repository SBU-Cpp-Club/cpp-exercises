CPP_FILES := $(wildcard *.cpp)
H_FILES := $(wildcard *.h)

extern: ${CPP_FILES} ${H_FILES}
	g++ -c extern_sub.cpp
	g++ -c extern.cpp
	g++ -o extern extern.o extern_sub.o

