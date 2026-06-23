/* C Given a positive integer n, find whether it can be represented as the sum of two or more consecutive positive integers.
Examples:
Input: n = 10; Output: true
Explanation: 10 can be expressed as: 1 + 2 + 3 + 4 = 10.
Input: n = 8; Output: false
Explanation: 8 cannot be expressed as the sum of two or more consecutive positive integers.
Input: n = 24; Output: true
Explanation: 24 can be expressed as: 7 + 8 + 9 = 24*/

#include "stdio.h"

int main()
{
    int n;
    printf("Enter Sum (or number) : ");
    scanf("%d", &n);
    if (n & (n - 1))
        printf("True");
    else
        printf("False");

    return 0;
}