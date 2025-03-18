GEN_FLAGS = -fexceptions -pedantic-errors -std=c++20 -Wall -Wconversion -Weffc++ -Werror -Wextra -Wsign-conversion
RELEASE_FLAGS = -O2
TARGET_BUILD = release
COMPILER_CPP = g++

FILENAME = string_view_literals

all: final

final: $(FILENAME).o 
	@echo "Linking and producing final release executable..."
	$(COMPILER_CPP) -o $@-$(TARGET_BUILD) $^ -pg
	
$(FILENAME).o: $(FILENAME).cpp
	@echo "Compiling object file(s)..."
	$(COMPILER_CPP) $(GEN_FLAGS) $(RELEASE_FLAGS) -c $^ -o $@
	@echo "Removing copy of source file(s)...."
	rm ./$(FILENAME).cpp

$(FILENAME).cpp:
	@echo "Copying source files from ../src..."
	cp ../src/$(FILENAME).cpp ./
	
clean:
	@echo "Removing build files..."
	rm $(FILENAME).o final-$(TARGET_BUILD) gmon.out
