EXECUTABLE = fibo
CXX = g++
LC := $(CXX)

#LINK := $(CXX) $(CXXFLAGS) $(LDFLAGS)
SOURCES = src/*.cpp
OBJECTS = $(patsubst, %.cpp, %.o, $(SOURCES))

TEST_EXECUTABLE := $(EXECUTABLE)_tests

CXX_ERROR_WARNINGS_FLAG := -Wall -Werror
CXX_INFORMATIONAL_WARNINGS_FLAG := -Wall
CXX_WARNDEPRECATE_FLAG :=
CXX_IMPORTPATH_FLAG := -I
CXX_NOLINK_FLAG := -c
CXX_OUTPUTFILE_FLAG := -o
CXX_SYMBOLICDEBUGINFO_FLAG := -g
CXX_INLINE_FLAG := -finline-functions
CXX_OPTIMIZE_FLAG := -O3 -fomit-frame-pointer
CXX_NOBOUNDSCHECK_FLAG := -fno-bounds-check
CXX_UNITTEST_FLAG := -funittest
CXX_RELEASE_FLAG := -frelease
CXX_DEBUG_FLAG := -fdebug
CXX_VERSION_FLAG := -fversion=
CXX_NOOBJECT_FLAG :=
CXX_STATIC_LIBRARY_FLAG := -static
CXX_SHARED_LIBRARY_FLAG := -shared
CXX_LINKER_FLAG := -Xlinker
CXX_DOCFILE_FLAG := -fdoc-file=
CXX_FPIC_FLAG := -fPIC

CXXFLAGS := $(CXX_INFORMATIONAL_WARNINGS_FLAG) $(CXX_WARNDEPRECATE_FLAG) $(CXX_SYMBOLICDEBUGINFO_FLAG) $(CXX_IMPORTPATH_FLAG)src/

CXXFLAGS_RELEASE := $(CXX_OPTIMIZE_FLAG) $(CXX_INLINE_FLAG) $(CXX_RELEASE_FLAG) $(CXX_NOBOUNDSCHECK_FLAG)
CXXFLAGS_DEBUG := $(CXX_DEBUG_FLAG)

BUILD ?= release
ifeq ($(BUILD), release)
	CXXFLAGS += $(CXXFLAGS_RELEASE)
endif
ifeq ($(BUILD), debug)
	CXXFLAGS += $(CXXFLAGS_DEBUG)
endif

.PHONY: all
all: build

.PHONY: build
build: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(LC) $(CXXFLAGS) $^ $(CXX_OUTPUTFILE_FLAG)$@

OBJECTS_UNITTEST = $(patsubst %.o, %_unittest.o, $(OBJECTS))
%_unittest.o: %.cpp
	$(CXX) $(CXXFLAGS) $(CXX_UNITTEST_FLAG) $(CXX_NOLINK_FLAG) $^ $(CXX_OUTPUTFILE_FLAG)$@

$(TEST_EXECUTABLE): $(OBJECTS_UNITTEST)
	$(LC) $(CXXFLAGS) $^ $(CXX_OUTPUTFILE_FLAG)$@

.PHONY: tests
tests: $(TEST_EXECUTABLE)
	./$(TEST_EXECUTABLE)

.PHONY: clean
clean:
	rm -rf $(EXECUTABLE) $(OBJECTS)