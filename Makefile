sample: sample.o
	cc -o sample sample.o

sample.s: sample.c
	cc -c sample.c

clean:
	rm -f *.o *.s sample
