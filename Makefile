# Makefile

CC = g++
LD = g++

CCFLAGS = -g -Wall -pedantic -std=c++11
LDFLAGS = 

PROG = bin/complex
OBJ_DIR = bin/obj

OBJ = $(OBJ_DIR)/mycomplex.o \
	$(OBJ_DIR)/testcmp.o

.SUFFIXES: .cpp .o

.PHONY: all clean
all: $(PROG)

clean:
	del bin\obj\*.o 
	del bin\complex.exe

$(PROG): $(OBJ)
	$(LD) $(LDFLAGS) -o $(PROG) $(OBJ)

$(OBJ_DIR)/mycomplex.o: mycomplex.cpp mycomplex.h | $(OBJ_DIR)
	$(CC) $(CCFLAGS) -c mycomplex.cpp -o $(OBJ_DIR)/mycomplex.o

$(OBJ_DIR)/testcmp.o: testcmp.cpp mycomplex.h | $(OBJ_DIR)
	$(CC) $(CCFLAGS) -c testcmp.cpp -o $(OBJ_DIR)/testcmp.o

$(OBJ_DIR)/%.o:%.cpp | $(OBJ_DIR)/
	$(CC) $(CCFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir bin
	mkdir bin\obj
