// power of any nuber using recursion and count time
#include "stdio.h"
#include "time.h"

int power(int base, int exp)
{
    if (exp == 0)
        return 1;

    else
        return base * power(base, exp - 1);
}

void main()
{
    int base,exp;
    printf("Enter base : ");
    scanf("%d", &base);
    printf("Enter exponent : ");
    scanf("%d", &exp);
    time_t start, end;
    start = clock();
    printf("Power of %d raised to %d is: %d\n", base, exp, power(base, exp));
    end = clock();
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    // here in ticks, we are converting it to seconds by dividing it with CLOCKS_PER_SEC
    printf("Time taken: %f seconds\n", time_taken);
}