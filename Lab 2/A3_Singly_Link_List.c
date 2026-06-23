// A Write a program to implement singly linked list operations (INSERT, DELETE, DISPLAY)

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *enterElement(struct node *first);
struct node *deleteElement(struct node *first);
void display(struct node *first);

int main()
{
    int choice;
    struct node *first = NULL; 

    while (1)
    {
        printf("Enter Choice as per following:\n1 to insert at Beggining\n2 to delete Element\n3 For display Singly Linked List\n4 To Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            first = enterElement(first);
            break;
        case 2:
            first = deleteElement(first);
            break;
        case 3:
            display(first);
            break;
        case 4:
            printf("--- Exiting ---\n");
            return 0;
        default:
            printf("Invalid choice! Please select 1-4.\n");
        }
    }
    return 0;
}

struct node *enterElement(struct node *first)
{
    int value;
    printf("Enter value to insert: ");
    scanf("%d", &value);

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = value;
    newNode->link = first;
    first = newNode;
    return first;
}

struct node *deleteElement(struct node *first)
{
    if (first == NULL)
    {
        printf("Empty List");
        return;
    }
    struct node *temp = first;
    first = first->link;
    free(temp);
    return first;
}

void display(struct node *first)
{
    if (first == NULL)
    {
        printf("Empty List");
        return;
    }
    struct node *temp = first;
    printf("Singly Linked List : ");
    while (temp != NULL)
    {
        printf("%d --> ", temp->info);
        temp = temp->link;
    }
    printf("NULL\n");
}
