GEN_FLAGS = -fexceptions -pedantic-errors -std=c++20 -Wall -Wconversion -Weffc++ -Werror -Wextra -Wsign-conversion
RELEASE_FLAGS = -O2

COMPILER_CPP = g++

all: final

final: main.o 
	@echo "Linking and producing final release executable..."
	$(COMPILER_CPP) -o $@-release $^ -pg
	
main.o: main.cpp
	@echo "Compiling main file..."
	$(COMPILER_CPP) $(GEN_FLAGS) $(RELEASE_FLAGS) -c $^ -o $@
	@echo "Removing copy of main.cpp...."
	rm ./main.cpp

main.cpp:
	@echo "Copying main.cpp from ../src..."
	cp ../src/main.cpp ./
	
clean:
	@echo "Removing build files..."
	rm main.o final-release gmon.out


