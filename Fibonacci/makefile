EXECUTABLE = prog
CXX = g++
CXXFLAGS = -unittest -Wall
COMPILE.cc = $(CXX) $(CXXFLAGS) -c
LINK = $(CXX) $(CXXFLAGS) $(LDFLAGS)
SOURCES = src/*.cpp
OBJECTS = $(patsubst, %.cpp, %.o, $(SOURCES))

.PHONY: all
all:
	build

.PHONY: build
build:
	$(EXECUTABLE) $(OBJECTS)

.PHONY: clean
clean:
	rm -rf $(EXECUTABLE) $(OBJECTS)