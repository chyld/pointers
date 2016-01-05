CFLAGS=-Wall -g -O0 -std=c11 # -v

clean:
	rm -f dst/*

# assembly: clean
# 	gcc $(CFLAGS) -S hello.c -o ex1.asm

all: clean
	gcc $(CFLAGS) src/hello.c -o dst/hello
	gcc $(CFLAGS) src/swap.c -o dst/swap
