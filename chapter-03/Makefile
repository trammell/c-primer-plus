
  CFLAGS = -Wno-implicit-int

usage:
	@echo "usage: make [clean]"

clean:
	rm -f goldenyou printing sizeof
	git clean -dfX

all: goldenyou

%: %.c
	cc $(CFLAGS) -o $@ $<
