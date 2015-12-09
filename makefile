# compiler and flags
CC=gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -Wundef -std=c99

# rebuildables
EXE = project_euler.exe
OBJ = project_euler.o solutions.o utility.o

TARGET = $(addprefix bin\,$(EXE))
OBJECTS = $(addprefix obj\,$(OBJ))

REBUILD = $(OBJECTS) $(TARGET)

# all has the executable as it's dependency. default rule.
all: $(TARGET)

# executable has all object files as it's dependencies
# $@ - the target, in this case the executable
# $^ - all dependencies
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

# build the project_euler object file, unlinked, with the relevent
# source and header files as dependencies
# '-o $@' - send output to the target
# '-c $<' - compile, unlinked, the first dependency
obj\project_euler.o: src\project_euler.c
	$(CC) $(CFLAGS) -o $@ -c $<

# build the solutions object file, unlinked, with the relevent
# source and header files as dependencies
# '-o $@' - send output to the target
# '-c $<' - compile, unlinked, the first dependency
obj\solutions.o: src\solutions\solutions.c
	$(CC) $(CFLAGS) -o $@ -c $<

# build the solutions object file, unlinked, with the relevent
# source and header files as dependencies
# '-o $@' - send output to the target
# '-c $<' - compile, unlinked, the first dependency
obj\utility.o: src\utility\utility.c
	$(CC) $(CFLAGS) -o $@ -c $<

# rm all rebuildables (object and executables)
clean: 
	rm $(REBUILD)

# TEST BUILDS #

# rebuildables
TEST_EXE = test.exe
TEST_OBJ = solutions.o utility.o stack.o test-stack.o

TEST_TARGET = $(addprefix test\bin\,$(TEST_EXE))
TEST_OBJECTS = $(addprefix test\obj\,$(TEST_OBJ))

TEST_REBUILD = $(TEST_TARGET) $(TEST_OBJECTS)

test: $(TEST_TARGET)

# executable has all object files as it's dependencies
# $@ - the target, in this case the executable
# $^ - all dependencies
$(TEST_TARGET): $(TEST_OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

# build the solutions object file, unlinked, with the relevent
# source and header files as dependencies
# '-o $@' - send output to the target
# '-c $<' - compile, unlinked, the first dependency
test\obj\test-stack.o: test\test-stack.c
	$(CC) $(CFLAGS) -o $@ -c $<

# build the solutions object file, unlinked, with the relevent
# source and header files as dependencies
# '-o $@' - send output to the target
# '-c $<' - compile, unlinked, the first dependency
test\obj\stack.o: src\utility\stack.c
	$(CC) $(CFLAGS) -o $@ -c $<

# build the solutions object file, unlinked, with the relevent
# source and header files as dependencies
# '-o $@' - send output to the target
# '-c $<' - compile, unlinked, the first dependency
test\obj\solutions.o: src\solutions\solutions.c
	$(CC) $(CFLAGS) -o $@ -c $<

# build the solutions object file, unlinked, with the relevent
# source and header files as dependencies
# '-o $@' - send output to the target
# '-c $<' - compile, unlinked, the first dependency
test\obj\utility.o: src\utility\utility.c
	$(CC) $(CFLAGS) -o $@ -c $<

# rm all test rebuildables (object and executables)
clean_test:
	rm $(TEST_REBUILD)
