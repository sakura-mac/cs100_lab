objs = test.o my_cstring.o

test : $(objs)
	cc -g -o test $(objs)

test.o:
	cc -c -g -o test.o test.c

my_cstring.o:
	cc -c -g -o my_cstring.o my_cstring.c
clean : 
	rm -rf test $(objs)
