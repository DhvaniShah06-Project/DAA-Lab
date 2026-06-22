// count digits in a number using recursion and calculate time taken by the function
#include <stdio.h>
#include <time.h>

int count_digits(int n)
{
    if (n == 0)
        return 0;

    else
        return 1 + count_digits(n / 10);
}

void main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    time_t start, end;
    start = clock();
    printf("Number of digits in %d is: %d\n", n, count_digits(n));
    end = clock();
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    // here in ticks, we are converting it to seconds by dividing it with CLOCKS_PER_SEC
    printf("Time taken: %f seconds\n", time_taken);
}