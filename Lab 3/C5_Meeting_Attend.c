/*C Given a 2D array arr[][] where arr[i][0] represents the starting time and arr[i][1] represents the ending time of the ith meeting, determine
whether it is possible for a person to attend all meetings without any overlaps, considering that a person can attend only one meeting at any
given time.
Input: arr[][] = [[2, 4], [1, 2], [7, 8], [5, 6], [6, 8]]
Output: false
Explanation: Since the third and fifth meeting overlap, a person cannot attend all the meetings.

Input: arr[][] = [[1, 4], [10, 15], [7, 10]]
Output: true
Explanation: Since all the meetings are held at different times, it is possible to attend all the meetings. */
#include <stdio.h>
void Bubble_Sort(int a[][2], int n)
{
    int i, j, temp_s, temp_e;
    for (int i = 0; i < n; i++)
    {
        for (j = i; j < n - i - 1; j++)
        {
            if (a[j][0] > a[j + 1][0])
            {
                temp_s = a[j][0];
                a[j][0] = a[j + 1][0];
                a[j + 1][0] = temp_s;

                temp_e = a[j][1];
                a[j][1] = a[j + 1][1];
                a[j + 1][1] = temp_e;
            }
        }
    }
}

void main()
{
    int n;
    printf("Enter how many meetings in a day : ");
    scanf("%d", &n);
    int a[n][2];
    for (int i = 0; i < n; i++)
    {

        printf("Enter start time : ");
        scanf("%d", &a[i][0]);
        printf("Enter end time : ");
        scanf("%d", &a[i][1]);
    }
    Bubble_Sort(a, n);

    int can_attend = 1;
    for (int i = 0; i < n - 1; i++)
    {

        if (a[i][1] > a[i + 1][0])
        {
            can_attend = 0;
            break;
        }
    }

    if (can_attend == 1)
    {
        printf("Output: true\n");
    }
    else
    {
        printf("Output: false\n");
    }
}