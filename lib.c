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

// Statistics, Calculus
double simpson_integral(double start, double end, int partition_count, double (*math_func)(double));
double sum(double array[], int size);
double mean(double sample[], int size);
double variance(double sample[], int size);

// String
long len(char string[]);
long char_count(char string[], char sample_char);

int main()
{
    double array[] = {1, 2, 34, 5, 1.3, 2.8};
    double output[6];

    double _sum = sum(array, 6);
    double _mean = mean(array, 6);
    double varian = variance(array, 6);

    char string[] = "Merhaba";
    long length = len(string);
    char ch = 'a';
    long count = char_count(string, ch);

    printf("%f\n%f\n%f\n%ld\n%ld\n\n", _sum, _mean, varian, length, count);

    apply(output, array, 6, exp);
    for (int i = 0; i < 6; i++)
    {
        printf("exp(%f) = %f\n", array[i], output[i]);
    }

    double total = simpson_integral(0, 1, 100, cos);
    printf("\n%f\n\n", total);

    expa(array, array, array, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("%f\n", array[i]);
    }

    return 0;
}

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

void div(double output[], double array1[], double array2[], int size)
{
    for (int i = 0; i < size; i++)
        output[i] = array1[i] / array2[i];
}

void expa(double output[], double array1[], double array2[], int size)
{
    for (int i = 0; i < size; i++)
        output[i] = pow(array1[i], array2[i]);
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