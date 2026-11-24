/*
            EXP -09
Write a program to create a singly linked list that maintains a list of
names in alphabetical order. Implement the following operations on
the list. a) Insert a new name b) Delete a specified name
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
    char name[50];
    struct node *next;
};

struct node *head = NULL;

void insert()
{
    struct node *temp, *prev, *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));

    printf("\nenter the name to insert :");
    scanf("%49s", newnode->name);
    newnode->next = NULL;
    if (head == NULL || strcmp(newnode->name, head->name) < 0)
    {
        newnode->next = head;
        head = newnode;
    }
    else
    {
        temp = head;
        prev = NULL;
        while (temp != NULL && strcmp(temp->name, newnode->name) < 0)
        {
            prev = temp;

            temp = temp->next;
        }
        newnode->next = temp;
        prev->next = newnode;
    }
    printf("\nThe name inserted successfully!");
}

void delete()
{
    if (head == NULL)
    {
        printf("\nThe LL is empty");
        return;
    }
    struct node *temp = head, *prev = NULL;
    char name[50];
    printf("\nEnter the name to delete");
    scanf("%49s", name);
    while (temp != NULL && strcmp(name, temp->name) != 0)
    {
        prev = temp;

        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("the name not found\n");
        return;
    }
    if (prev == NULL)
    {
        head = temp->next;
    }
    else
    {
        prev->next = temp->next;
    }
    free(temp);
    printf("The %s is deleted\n", name);
}
void display()
{
    struct node *temp;
    if (head == NULL)
    {
        printf("\nthe list is empty");
        return;
    }
    temp = head;
    printf("\nthe Names in alphabatic order :");
    while (temp != NULL)
    {
        printf("%s->", temp->name);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main()
{
    int ch;

    do
    {
        printf("\n\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        if (scanf("%d", &ch) != 1)
        {
            printf("\nInvalid input!");
            break;
        }

        switch (ch)
        {
        case 1:
            insert();
            break;

        case 2:
            delete();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("\nExiting program...");
            break;

        default:
            printf("\nInvalid choice!");
        }

    } while (ch != 4);

    return 0;
}