GEN_FLAGS = -fexceptions -pedantic-errors -std=c++20 -Wall -Wconversion -Weffc++ -Werror -Wextra -Wsign-conversion
DBG_FLAGS = -ggdb

COMPILER_CPP = g++

all: final

final: main.o 
	@echo "Linking and producing final debug executable..."
	$(COMPILER_CPP) -o $@-debug $^ -pg
	
main.o: main.cpp
	@echo "Compiling main file..."
	$(COMPILER_CPP) $(GEN_FLAGS) $(DBG_FLAGS) -c $^ -o $@
	@echo "Removing copy of main.cpp...."
	rm ./main.cpp

main.cpp:
	@echo "Copying main.cpp from ../src..."
	cp ../src/main.cpp ./
	
clean:
	@echo "Removing build files..."
	rm main.o final-debug gmon.out

