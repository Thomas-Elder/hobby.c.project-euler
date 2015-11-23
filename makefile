# compiler and flags
CC=gcc
CFLAGS= -Wall -Wextra -Werror -pedantic -Wundef -std=c99

# paths
SRC_DIR = src\
OBJ_DIR = obj\
BIN_DIR = bin\

# rebuildables
TARGET = bin\project_euler.exe
OBJECTS = obj\project_euler.o obj\solutions.o obj\utility.o
REBUILD = $(OBJECTS) $(TARGET)

# all has the executable as it's dependency. default rule.
all: $(TARGET)

# executable has all object files as it's dependencies
# $@ - the target, in this case the executable
# $^ - all dependencies
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

# build all object files, unlinked with all source files as dependencies
# '-o $@' - send output to the target, in this case, all object files
# '-c $^' - compile, unlinked, all dependencies
obj\%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $^

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