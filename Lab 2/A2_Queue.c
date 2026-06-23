// A Write a program to implement queue operations (INSERT, DELETE, DISPLAY)

#include "stdio.h"
int f = -1;
int r = -1;
int n = 10;
int q[10];

void enqueue(int);
int dequeue();
void display();

int main()
{
    int choice, value, ans;
    while (1)
    {
        printf("1 To Enqueue\n2 To Dequeue\n3 To Display\n4 To Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter Number : ");
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2:
            ans = dequeue();
            printf("Deleted Element : %d\n", ans);
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting");
            return 0;

        default:
            printf("Enter Valid Choice\n");
            break;
        }
    }

    return 0;
}

void enqueue(int y)
{
    if (r >= n - 1)
    {
        printf("Queue Overflow");
        return;
    }
    if (f == -1)
        f = 0;
    q[++r] = y;
}

int dequeue()
{
    if (f == -1)
    {
        printf("Queue Underflow");
        return -1;
    }
    int x = q[f];
    if (f == r)
        f = r = -1;
    else
        f++;
    return x;
}

void display()
{
    printf("-----Displaying Queue-----\n");
    for (int i = f; i <= r; i++)
    {
        printf("%d-->", q[i]);
    }
    printf("NULL\n");
}