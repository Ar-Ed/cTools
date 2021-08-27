#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Array functions
void apply(double output[], double source[], int size, double (*math_func)(double));
void add(double output[], double array1[], double array2[], int size);
void sub(double output[], double array1[], double array2[], int size);
void divis(double output[], double array1[], double array2[], int size);
void mul(double output[], double array1[], double array2[], int size);
void expa(double output[], double array1[], double array2[], int size);
void absa(double output[], double array[], int size);
void neg(double output[], double array[], int size);
char equi(double array1[], double array2[], int size);
void compare_to_bool(double output[], double array1[], double array2[], int size, char *operator);
void uniform_init(double array[], double value, int size);
void print_array(double array[], double size, char *sep, char decimals);
void to_file(double array[], double size, char *file_name, char *sep, char decimals);

// Array-Const functions
void add_cons(double output[], double array1[], double constant, int size);
void sub_cons(double output[], double array1[], double constant, int size);
void div_cons(double output[], double array1[], double constant, int size);
void mul_cons(double output[], double array1[], double constant, int size);
void exp_cons(double output[], double array1[], double constant, int size);

// Statistics
double sum(double array[], int size);
double mean(double sample[], int size);
double variance(double sample[], int size);
void cumsum(double output[], double sample[], int size);

// Calculus
double simpson_integral(double start, double end, int partition_count, double (*math_func)(double));

// String
long len(char string[]);
long char_count(char string[], char sample_char);