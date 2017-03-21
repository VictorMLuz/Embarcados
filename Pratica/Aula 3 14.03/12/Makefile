total_caracs: total_caracs.o num_caracs.o
	gcc $(CFLAGS) -o  total_caracs  total_caracs.o num_caracs.o
main:  total_caracs.c num_caracs.h
	gcc $(CFLAGS) -c total_caracs.c
bib: num_caracs.c num_caracs.h
	gcc $(CFLAGS) -c num_caracs.c
clean:
	rm -f *.o total_caracs
