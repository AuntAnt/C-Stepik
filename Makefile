# recompile and run
all:
	cd output/
	rm -rf main
	clang src/main.c -o output/main -std=c17
	./output/main

# run without recompiling
run:
	./output/main
