CFLAGS=-Wall -g

all: clean catshit

catshit:
	cc -o catshit catshit.c

clean:
	rm -f catshit
