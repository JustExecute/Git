all:main

main:main.o
	gcc  main.o -o main -L /home/sandeep/KM_GIT/cvital/GNU_ToolChain/mini_project/calculator/lib -laddsub


main.o:main.c
	gcc -c main.c -I /home/sandeeplinux/KM_GIT/cvital/GNU_ToolChain/mini_project/calculator/inc 

clean:
	rm *.o 
install:
	 cp main /home/${USER}/KM_GIT/cvital/GNU_ToolChain/mini_project/calculator/bin




