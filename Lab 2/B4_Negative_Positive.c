/* B  Given an array arr[] of size n, the task is to rearrange it in alternate positive and negative manner without changing the relative order of
positive and negative numbers. In case of extra positive/negative numbers, they appear at the end of the array.*/

#include <stdio.h>

void rearrangeArray(int arr[], int n)
{
    int pos[n], neg[n];
    int posCount = 0, negCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            pos[posCount++] = arr[i];
        }
        else
        {
            neg[negCount++] = arr[i];
        }
    }

    int i = 0, j = 0, k = 0;

    while (i < posCount && j < negCount)
    {
        if (k % 2 == 0)
        {
            arr[k++] = pos[i++];
        }
        else
        {
            arr[k++] = neg[j++];
        }
    }

    while (i < posCount)
    {
        arr[k++] = pos[i++];
    }

    while (j < negCount)
    {
        arr[k++] = neg[j++];
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, -4, -1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    rearrangeArray(arr, n);

    printf("Rearranged array: \n");
    printArray(arr, n);

    return 0;
}
