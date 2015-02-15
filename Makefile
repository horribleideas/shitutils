CFLAGS=-Wall -g -std=c11 

shits = $(patsubst %.c,%,$(wildcard *.c))

all: $(shits)

%: %.c
	cc $(CFLAGS) -o $@ $<

shitlist:
	cc $(CFLAGS) -o shitls shitlist.c

clean:
	rm -f $(shits) shitls
