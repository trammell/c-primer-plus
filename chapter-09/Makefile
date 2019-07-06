
  CFLAGS = -Wno-implicit-int

usage:
	@echo "usage: make [clean|all]"

clean:
	git clean -dfx

all: letterhead1

%: %.c
	cc $(CFLAGS) -o $@ $<
