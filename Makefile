CFILESTOMAKE = $(patsubst ./%-c.c, ./%-c.out, $(shell find . -type f -name '*.c'))
CPPFILESTOMAKE = $(patsubst ./%-cpp.cpp, ./%-cpp.out, $(shell find . -type f -name '*.cpp'))
LIBS = -lm
CFLAGS = -g -Wall

default: $(CFILESTOMAKE) $(CPPFILESTOMAKE)

all: default

./%-c.out: ./%-c.c
	cc $< -o $@
	gcc $< -o gcc-$@
	clang $< -o clang-$@
	g++ $< -o c-g++-$@
./%-cpp.out: ./%-cpp.cpp
	c++ $< -o $@
	g++ $< -o g++-$@
	clang++ $< -o clang++-$@
clean:
	-rm -f *.out
