# Makefile

CC = g++
LD = g++

CCFLAGS = -g -Wall -pedantic -std=c++11
LDFLAGS = 

PROG = complex

OBJ = mycomplex.o \
 testcmp.o

.SUFFIXES: .cpp .o

.PHONY: all clean
all: $(PROG)

clean:
	del *.o $(PROG)

$(PROG): $(OBJ)
	$(LD) $(LDFLAGS) -o $(PROG) $(OBJ)

mycomplex.o: mycomplex.cpp mycomplex.h
	$(CC) $(CCFLAGS) -c mycomplex.cpp

testcmp.o: testcmp.cpp mycomplex.h
	$(CC) $(CCFLAGS) -c testcmp.cpp

.cpp.o:
	$(CC) $(CCFLAGS) -c $< -o $@

