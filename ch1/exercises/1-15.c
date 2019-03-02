#include <stdio.h>

int f_to_c(int fahr);

int main() 
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    for (fahr = lower; fahr <= upper; fahr += step)
        printf("%d\t%d\n", fahr, f_to_c(fahr));

    return 0;
}

int f_to_c(int fahr)
{
    return 5 * (fahr - 32) / 9;
}
