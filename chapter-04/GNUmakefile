SUFFIX := mz

SOURCES := $(wildcard *-${SUFFIX}.cpp)

EXEC := $(SOURCES:.cpp=.ex)

ALL: $(EXEC)

%.ex: %.cpp
	g++ -Wall -Wzero-as-null-pointer-constant -pedantic -std=c++11 -o $@ $<


clean:
	rm -f $(EXEC)
