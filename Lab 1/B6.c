/*Given a number n, write an efficient function to print all prime factors of n.
 For example, if the input number is 12, then output should be "2 2 3".
  And if the input number is 315, then output should be "3 3 5 7". */

#include "stdio.h"
#include "time.h"

void main()
{

    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    time_t start, end;
    start = clock();
    printf("Prime factors of %d are : ", n);
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n /= i;
        }
    }
    end = clock();
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    // here in ticks, we are converting it to seconds by dividing it with CLOCKS_PER_SEC
    printf("\nTime taken : %f seconds", time_taken);
}