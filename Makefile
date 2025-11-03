CC := gcc -std=gnu99
CFLAGS := -Wall -Wextra -Wno-int-conversion -fpermissive -fdiagnostics-show-option -O2 # -ggdb3
# LDFLAGS := -fuse-ld=mold -flto -static
LDFLAGS := -flto -static -pie
MAIN := src/baking_test.c

ALL_SRC := $(wildcard src/*.c)
SRC := $(filter-out $(MAIN), $(ALL_SRC))
OBJ := $(patsubst src/%.c,obj/%.o,$(SRC))

XCOMP-TARGETS := windows-x86_64 linux-x86_64 linux-aarch64

.PHONY: default dependencies clean test xcompile

default: baking-test

test: baking-test
	${CURDIR}/$<

baking-test: obj/baking_test.o $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

obj/%.o: src/%.c | obj/
	$(CC) $(CFLAGS) -c $< -o $@

obj/:
	@mkdir -p obj/

clean:
	rm -rf obj/*.o baking-test*

baking-test-windows-x86_64: $(ALL_SRC)
	x86_64-w64-mingw32-$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

baking-test-linux-x86_64: $(ALL_SRC)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

baking-test-linux-aarch64: $(ALL_SRC)
	aarch64-linux-gnu-$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)


xcompile: $(patsubst %, baking-test-%, $(XCOMP-TARGETS))
	file baking-test-*
