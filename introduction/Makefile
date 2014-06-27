SOURCES=$(wildcard *.c)
PROGRAMS=$(SOURCES:.c=.run)

all: $(PROGRAMS)

%.o: %.c
	gcc -c -o $@ $<

%.run: %.o
	gcc -ldl -o $@ $<

clean:
	rm -f $(PROGRAMS) *.o
