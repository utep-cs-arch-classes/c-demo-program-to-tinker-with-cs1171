sample: sample.o
	cc -o sample sample.o

sample.s: sample.c
	cc -S sample.c

sample.o: sample.s
	cc -c sample.s

clean:
	rm -f *.o *.s sample
