EXECUTABLE = fibo
CXX := g++
CXXFLAGS := -Wall -O3
LDFLAGS := 
#LINK := $(CXX) $(CXXFLAGS) $(LDFLAGS)
SOURCES := src/*.cpp
#OBJECTS := $(patsubst, %.cpp, %.o, $(SOURCES))

.PHONY: all
all: build

.PHONY: build
build:
	$(CXX) $(CXXFLAGS) -o $(EXECUTABLE) $(SOURCES)

.PHONY: clean
clean:
	rm -rf $(EXECUTABLE) $(OBJECTS)