/*B Given an unsorted array, find the minimum difference between any pair in the given array using sorting approad.
Examples:

Input: [1, 5, 3, 19, 18, 25]; Output: 1
Explanation: Minimum difference is between 18 and 19

Input: [30, 5, 20, 9]; Output: 4
Explanation: Minimum difference is between 5 and 9

Input: [1, 19, -4, 31, 38, 25, 100]; Output: 5
Explanation: Minimum difference is between 1 and -4 */

#include "stdio.h"

void Bubble_Sort(int a[], int size)
{
    int i;
    for (i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void main()
{
    int n;
    printf("Enter size : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter number : ");
        scanf("%d", &arr[i]);
    }
    Bubble_Sort(arr, n);
    int min_diff = arr[1] - arr[0];
    for (int i = 1; i < n - 1; i++)
    {
        int diff = arr[i + 1] - arr[i];
        if (min_diff > diff)
            min_diff = diff;
    }
    printf("Minimum Element : %d\n", min_diff);
 
}