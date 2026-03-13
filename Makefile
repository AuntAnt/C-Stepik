# Executable name
TARGET = app

# Define compiler
OS := $(shell uname -s)
ifeq ($(OS),Darwin)
	CC = clang
else
	CC = gcc
endif

# Recompile and run
all:
	$(CC) src/main.c -lm -o $(TARGET) -std=c17
	./$(TARGET)

# Run without recompiling
run:
	./$(TARGET)
