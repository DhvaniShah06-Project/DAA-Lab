//sum from 1 to n
#include "stdio.h"
#include "time.h"

int Sum_N(int n){
    if (n == 0)
        return 0;

    else
        return n + Sum_N(n - 1);
}

void main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    time_t start, end;
    start = clock();
    printf("Sum from 1 to %d is: %d\n", n, Sum_N(n));
    end = clock();
    double time_taken = ((double)(end - start) )/ CLOCKS_PER_SEC;
    // here in ticks, we are converting it to seconds by dividing it with CLOCKS_PER_SEC
    printf("Time taken: %f seconds\n", time_taken);
}