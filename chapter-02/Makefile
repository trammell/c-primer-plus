usage:
	@echo "usage: make [clean]"

clean:
	rm -f inform *.o

all: simple

simple: simple.c
	cc -Wno-implicit-int -o simple simple.c

