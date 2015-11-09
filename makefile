# compiler and flags
CC=gcc
CFLAGS= -Wall -Wextra -Werror -pedantic -Wundef

# rebuildables
TARGET = project_euler.exe
OBJECTS = project_euler.o
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
%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $^

# build the recursion object file, unlinked, with the relevent
# source and header files as dependencies
# '-c $<' - compile, unlinked, the first dependency
recursion.o: recursion.c
	$(CC) $(CFLAGS) -c $<

# build the recursive_functions object file, unlinked, with the relevent
# source and header files as dependencies
# '-c $<' - compile, unlinked, the first dependency
recursive_functions.o: recursive_functions.c
	$(CC) $(CFLAGS) -c $<

# rm all rebuildables (object and executables)
clean: 
	rm $(REBUILD)