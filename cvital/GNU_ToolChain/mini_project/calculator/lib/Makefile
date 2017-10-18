statlib:
	gcc -c add.c
	gcc -c sub.c
	ar -rcs libaddsub.a add.o sub.o
dynlib:
	gcc -fpic -c add.c
	gcc -fpic -c sub.c
	gcc -shared -o libaddsub.so add.o sub.o
clean:
	rm *.o libaddsub.so 
	rm libaddsub.a
