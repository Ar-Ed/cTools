C = gcc
opt = -O3 -std=c11

all:
	${C} ${opt} main.c -o main

lib:
	${C} ${opt} lib.c -o lib
as:
	${C} -fverbose-asm main.c -S 

rml:
	rm lib