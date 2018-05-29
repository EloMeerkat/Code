CC=gcc
CFLAGS=-I. -lm
OBJ = alea.o 

%.o:%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)
