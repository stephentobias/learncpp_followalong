GEN_FLAGS = -fexceptions -pedantic-errors -std=c++20 -Wall -Wconversion -Weffc++ -Werror -Wextra -Wsign-conversion
DBG_FLAGS = -ggdb
TARGET_BUILD = {replace_with_target}
COMPILER_CPP = g++

FILENAME = {replace_with_source_filename}

all: final

final: $(FILENAME).o 
	@echo "Linking and producing final debug executable..."
	$(COMPILER_CPP) -o $@-$(TARGET_BUILD) $^ -pg
	
$(FILENAME).o: $(FILENAME).cpp
	@echo "Compiling object file(s)..."
	$(COMPILER_CPP) $(GEN_FLAGS) $(DBG_FLAGS) -c $^ -o $@
	@echo "Removing copy of source file(s)...."
	rm ./$(FILENAME).cpp

$(FILENAME).cpp:
	@echo "Copying source files from ../src..."
	cp ../src/$(FILENAME).cpp ./
	
clean:
	@echo "Removing build files..."
	rm $(FILENAME).o final-$(TARGET_BUILD) gmon.out
