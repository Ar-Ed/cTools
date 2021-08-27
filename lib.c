#include "lib.h"

void apply(double output[], double source[], int size, double (*math_func)(double))
{
    for (int i = 0; i < size; i++)
        output[i] = math_func(source[i]);
}

void add(double output[], double array1[], double array2[], int size)
{
    for (int i = 0; i < size; i++)
        output[i] = array1[i] + array2[i];
}

void sub(double output[], double array1[], double array2[], int size)
{
    for (int i = 0; i < size; i++)
        output[i] = array1[i] - array2[i];
}

void mul(double output[], double array1[], double array2[], int size)
{
    for (int i = 0; i < size; i++)
        output[i] = array1[i] * array2[i];
}

void divis(double output[], double array1[], double array2[], int size)
{
    for (int i = 0; i < size; i++)
        output[i] = array1[i] / array2[i];
}

void expa(double output[], double array1[], double array2[], int size)
{
    for (int i = 0; i < size; i++)
        output[i] = pow(array1[i], array2[i]);
}

void absa(double output[], double array[], int size)
{
    for (int i = 0; i < size; i++)
        output[i] = fabs(array[i]);
}

void neg(double output[], double array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        output[i] = -array[i];
    }
}

char equi(double array1[], double array2[], int size)
{
    for (int i = 0; i < size; i++)
        if (array1[i] != array2[i])
            return 0;
    return 1;
}

void compare_to_bool(double output[], double array1[], double array2[], int size, char *operator)
{
    if (!strcmp(operator, ">"))
    {
        for (int i = 0; i < size; i++)
            output[i] = array1[i] > array2[i];
    }
    else if (!strcmp(operator, ">="))
    {
        for (int i = 0; i < size; i++)
            output[i] = array1[i] >= array2[i];
    }
    else if (!strcmp(operator, "=="))
    {
        for (int i = 0; i < size; i++)
            output[i] = array1[i] == array2[i];
    }
    else if (!strcmp(operator, "<"))
    {
        for (int i = 0; i < size; i++)
            output[i] = array1[i] < array2[i];
    }
    else if (!strcmp(operator, "<="))
    {
        for (int i = 0; i < size; i++)
            output[i] = array1[i] <= array2[i];
    }
    else if (!strcmp(operator, "!="))
    {
        for (int i = 0; i < size; i++)
            output[i] = array1[i] != array2[i];
    }
    else
        ;
}

void print_array(double array[], double size, char *sep, char decimals)
{
    decimals = decimals > 15 ? 15 : decimals;
    for (int i = 0; i < size; i++)
        printf("%.*f%s", decimals, array[i], sep);
}

void to_file(double array[], double size, char *file_name, char *sep, char decimals){
    decimals = decimals > 15 ? 15 : decimals;
    FILE *file = fopen(file_name, "a");

    for (int i = 0; i < size; i++)
        fprintf(file, "%.*f%s", decimals, array[i], sep);

    fclose(file);

}

void uniform_init(double array[], double value, int size)
{
    for (int i = 0; i < size; i++)
        array[i] = value;
}

void add_cons(double output[], double array1[], double constant, int size)
{
    for (int i = 0; i < size; i++)
        output[i] = array1[i] + constant;
}

void sub_cons(double output[], double array1[], double constant, int size)
{
    for (int i = 0; i < size; i++)
        output[i] = array1[i] - constant;
}

void div_cons(double output[], double array1[], double constant, int size)
{
    for (int i = 0; i < size; i++)
        output[i] = array1[i] / constant;
}

void mul_cons(double output[], double array1[], double constant, int size)
{
    for (int i = 0; i < size; i++)
        output[i] = array1[i] * constant;
}

void exp_cons(double output[], double array1[], double constant, int size)
{
    for (int i = 0; i < size; i++)
        output[i] = pow(array1[i], constant);
}

double simpson_integral(double start, double end, int partition_count, double (*math_func)(double))
{
    partition_count = (partition_count % 2) ? partition_count : partition_count + 1;

    double total = math_func(start) - math_func(end);
    double step_size = (end - start) / partition_count;

    for (double step = start + step_size; step < end; step += 2 * step_size)
    {
        total += math_func(step) * 4 + math_func(step_size + step) * 2;
    }

    return total / 3 * step_size;
}

double sum(double array[], int size)
{
    double total = 0;

    for (int i = 0; i < size; i++)
    {
        total += array[i];
    }

    return total;
}

double mean(double sample[], int size)
{
    double total = 0;

    for (int i = 0; i < size; i++)
    {
        total += sample[i];
    }

    return total / size;
}

double variance(double sample[], int size)
{
    double total = 0;
    double mn = mean(sample, size);

    for (int i = 0; i < size; i++)
    {
        total += sample[i] * sample[i];
    }

    return total / size - mn * mn;
}

void cumsum(double output[], double sample[], int size)
{
    for (int i = 1; i < size; i++)
        output[i] = sample[i - 1] + sample[i];
}

long len(char string[])
{
    long length;
    for (length = 0; string[length] != '\0'; length++)
        ;

    return length;
}

long char_count(char string[], char sample_char)
{
    long count = 0;
    for (long i = 0; string[i] != '\0'; i++)
        if (string[i] == sample_char)
            count++;

    return count;
}