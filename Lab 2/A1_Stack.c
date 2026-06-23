// A Write a program to implement stack operations (PUSH, POP, PEEP, CHANGE & DISPLAY)

#include "stdio.h"
#include "stdlib.h"
int top = -1;
#define MAX 5
int s[MAX];
void push();
int pop();
int peek();
void display();
void change();
int main()
{
    int choice, ans, a;
    while (1)
    {
        printf("1 To Push\n2 To peek(return i th element from top)\n3 To Pop(remove top most)\n4 to change i th element from top\n5 To Display\n6 To exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            ans = peek();
            printf("Returned Element : %d\n", ans);
            break;
        case 3:
            a = pop();
            // printf("Top Most Pop : %d\n", a);
            break;
        case 4:
            change();
            break;
        case 5:
            display();
            break;
        case 6:
            printf("---Exiting---");
            return 0;
        }
    }
    return 0;
}

void push()
{
    int x;
    printf("Enter Element : ");
    scanf("%d", &x);
    if (top >= MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    s[++top] = x;
}
int pop()
{

    if (top < 0)
    {
        printf("Stack Underflow\n");
        return 0;
    }
    else
    {
        printf("Top Most Pop : %d\n", s[top]);
        return s[top--];
    }
}

int peek()
{
    int i;
    printf("Enter position from top :");
    scanf("%d", &i);
    if (top - i + 1 < 0)
    {
        printf("Empty Stack\n");
        return 0;
    }
    return s[top - i + 1];
}

void change()
{
    int i, x;
    printf("Enter position from top : ");
    scanf("%d", &i);
    printf("Enter new value : ");
    scanf("%d", &x);
    if (top - i + 1 < 0)
    {
        printf("Empty Stack\n");
        return;
    }
    s[top - i + 1] = x;
    int i, x;

    printf("Original Value : %d\n", s[top - i]);
    s[top - i] = x;
    printf("Changed Value : %d\n", s[top - i]);
}

void display()
{
    if (top < 0)
    {
        printf("Empty Stack\n");
        return;
    }
    for (int i = 0; i < MAX; i++)
    {
        printf("%d ", s[i]);
    }
}