usage:
	@echo "usage: make [clean]"

clean:
	git clean -dfX

all: simple

simple: simple.c
	cc -Wno-implicit-int -o simple simple.c

