C = gcc
opt = -O3 -std=c11

all:
	${C} ${opt} main.c -o main
	./main
	
lib:
	${C} ${opt} test.c lib.c -o test
	./test

as:
	${C} -fverbose-asm main.c -S 

rml:
	rm lib