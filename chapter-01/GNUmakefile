SUFFIX := mz

SOURCES := $(wildcard *-${SUFFIX}.cpp)

EXEC := $(SOURCES:.cpp=.ex)

ALL: $(EXEC)

%.ex: %.cpp
	g++ -Wall -o $@ $<

