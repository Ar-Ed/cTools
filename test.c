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
    print_array(array, 6, "\n", 100);

    printf("%d\n", equi(array, output, 6));

    compare_to_bool(output, output, output, 6, "==");
    print_array(output, 6, " ", 0);

    printf("\n");

    cumsum(output, output, 6);
    print_array(output, 6, " ", 0);

    printf("\n");

    neg(output, output, 6);
    print_array(output, 6, " ", 0);

    printf("\n");

    absa(output, output, 6);
    print_array(output, 6, " ", 0);

    printf("\n");

    mul_cons(output, output, 2, 6);
    print_array(output, 6, " ", 0);

    to_file(output, 6, "output.txt", " ", 6);

    char res = cmpstr("dsfasfs", "dsfadsfs");
    printf("\n%d\n", res);

    char str[50];
    to_str(str, output, 6, " - ", 0);
    printf("%s", str);

    int countt = str_count("afsdgdsafdsffdfdfdfdagacas", "df");
    printf("\n%d\n", countt);

    double outputa[3];
    slice_arr(outputa, output, 5, 1, -1);
    print_array(outputa, 4, " - ", 0);

    double bigar[1000000];
    uniform_init(bigar, 3, 1000000);
    mul(bigar, bigar, bigar, 1000000);
    print_array(bigar, 1000000, "", 0);

    return 0;
}