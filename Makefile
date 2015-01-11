CFLAGS=-Wall -g

all: clean catshit shithead

catshit:
	cc -o catshit catshit.c

shithead:
	cc -o shithead shithead.c

clean:
	rm -f catshit shithead
