PROJECT1 = alloc
PROJECT2 = prov-rep

CFLAGS = -std=gnu99 -lm

all: $(PROJECT1) $(PROJECT2)

$(PROJECT1): $(PROJECT1).o
	gcc $(CFLAGS) $(PROJECT1).o -o $(PROJECT1)

$(PROJECT1).o: $(PROJECT1).c
	gcc $(CFLAGS) -c $(PROJECT1).c

$(PROJECT2): $(PROJECT2).o
	gcc $(CFLAGS) $(PROJECT2).o -o $(PROJECT2)

$(PROJECT2).o: $(PROJECT2).c
	gcc $(CFLAGS) -c $(PROJECT2).c

clean:
	rm $(PROJECT1) $(PROJECT1).o $(PROJECT2) $(PROJECT2).o
