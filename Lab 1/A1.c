// factorial of n
#include "stdio.h"
#include "time.h"

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    else
        return n * factorial(n - 1);
}

void main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    time_t start, end;
    start = clock();
    printf("Factorial of %d is: %d\n", n, factorial(n));
    end = clock();
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    // here in ticks, we are converting it to seconds by dividing it with CLOCKS_PER_SEC
    printf("Time taken: %f seconds\n", time_taken);
}