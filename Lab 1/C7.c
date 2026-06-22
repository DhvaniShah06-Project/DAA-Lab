/* C Given two integers n and m (m! = 0). Find the number closest to n and divisible by m.
 If there is more than one such number, then output the
 one having maximum absolute value.

 Examples:
 Input: n = 13, m = 4; Output: 12
Explanation: 12 is the closest to 13, divisible by 4.

 Input: n = -15, m = 6 ; Output: -18
 Explanation: Both -12 and -18 are closest to -15, but -18 has the maximum absolute value.

// 1. Naive Approach: Iterative Checking - O(m) Time and O(1) Space

// 2. Expected Approach: By finding Quotient - O(1) Time and O(1) Space
/*int quotient = n/m;
    int closest = quotient * m;
    if(abs(n - closest) > abs(n - (closest + m)))
        closest += m;

    printf("Closest number to %d that is divisible by %d is : %d", n, m, closest);*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int n, m;
    printf("Enter number n : ");
    scanf("%d", &n);
    printf("Enter number to be divisible  m : ");
    scanf("%d", &m);
    // iterative approach
    time_t start, end;
    start = clock();
    for (int i = n; ; )
    {
        if (i % m == 0)
        {
            printf("Closest number to %d that is divisible by %d is : %d", n, m, i);
            break;
        }
    }

   

    end = clock();
   
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nTime taken : %f seconds", time_taken);
}