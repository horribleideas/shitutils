CFLAGS=-Wall -g

shits = $(patsubst %.c,%,$(wildcard *.c))

all: $(shits)

%: %.c
	cc -o $@ $<

shithead:
	cc -o shithead shithead.c

clean:
	rm -f $(shits)
