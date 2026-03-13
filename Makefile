# recompile and run
all:
	cd output/
	rm -rf main
	clang src/main.c -o output/main -std=c17
	./output/main

# run withput recompiling
run:
	./output/main
