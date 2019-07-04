usage:
	@echo "usage: make [clean]"

clean:
	git clean -dfX

all: simple

simple: simple.c
	cc -Wno-implicit-int -o simple simple.c

fathom: fathom.c
	cc -Wno-implicit-int -o fathom fathom.c

butler: butler.c
	cc -Wno-implicit-int -o butler butler.c
