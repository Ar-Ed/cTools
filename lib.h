#pragma once
#include <stdio.h>
#include <math.h>

// Array functions
void apply(double output[], double source[], int size, double (*math_func)(double));
void add(double output[], double array1[], double array2[], int size);
void sub(double output[], double array1[], double array2[], int size);
void div(double output[], double array1[], double array2[], int size);
void mul(double output[], double array1[], double array2[], int size);
void expa(double output[], double array1[], double array2[], int size);
char equi(double array1[], double array2[], int size);
void uniform_init(double array[], double value, int size);

// Statistics, Calculus
double simpson_integral(double start, double end, int partition_count, double (*math_func)(double));
double sum(double array[], int size);
double mean(double sample[], int size);
double variance(double sample[], int size);

// String
long len(char string[]);
long char_count(char string[], char sample_char);