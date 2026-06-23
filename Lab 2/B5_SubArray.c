/* B Given an array arr[], the task is to generate all the possible subarrays of the given array.
Examples:
Input: arr[] = [1, 2, 3]
Output: [ [1], [1, 2], [2], [1, 2, 3], [2, 3], [3] ]
Input: arr[] = [1, 2]
Output: [ [1], [1, 2], [2] ]*/

#include <stdio.h>

void printSubarrays(int arr[], int n)
{
    // Pick starting point
    for (int i = 0; i < n; i++)
    {

        // Pick ending point
        for (int j = i; j < n; j++)
        {

            // Print subarray between current starting and ending points
            printf("[ ");
            for (int k = i; k <= j; k++)
            {
                printf("%d ", arr[k]);
            }
            printf("] ");
        }
        printf("\n"); // Newline for better readability between starting groups
    }
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int size = sizeof(arr) / sizeof(arr[0]);

    printf("All possible subarrays:\n");
    printSubarrays(arr, size);

    return 0;
}
