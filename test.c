#include "lib.h"

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

    printf("%d", equi(array, output, 6));

    return 0;
}