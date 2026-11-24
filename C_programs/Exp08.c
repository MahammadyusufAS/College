/*
Write a C program to simulate the working of a circular Queue of
integers. Represent circular queue element as a structure and use array
of structures as your implementation method. Start and end of the
circular queue must be identified by an empty array element.

*/

#include <stdio.h>
#define MAX 5

struct node
{
    int data;
    int is_empty;
};

struct node queue[MAX];
int head = 0, tail = 0;

void init()
{
    int i = 0;
    for (i = 0; i < MAX; i++)
    {
        queue[i].is_empty = 1;
    }
}

void enqueue(int val)
{
    if (queue[tail].is_empty == 0)
    {
        printf("the queue is full");
        return;
    }
    queue[tail].data = val;
    queue[tail].is_empty = 0;
    tail = (tail + 1) % MAX;
}

void dequeue()
{
    if (queue[head].is_empty == 1)
    {
        printf("the queue is empty");
        return;
    }
    queue[head].is_empty = 1;
    head = (head + 1) % MAX;
    printf("Deleted element: %d\n", queue[head].data);
}
void display()
{
    if (queue[head].is_empty == 1)
    {
        printf("the queue is empty");
        return;
    }
    int i = head;
    printf("\nthe queue elements are :");
    do
    {
        printf("%d ", queue[i].data);
        i = (i + 1) % MAX;
    } while (i != tail);
    printf("\n\n");
}

int main()
{
    init();
    int ch, i;
    printf("The Circular queue :");
    while (1)
    {
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit");
        printf("\nEnter ur choice :");
        scanf("%d", &ch);
        if (ch == 1)
        {
            int val;
            printf("Enter the value to insert :\n");
            scanf("%d", &val);
            enqueue(val);
        }
        else if (ch == 2)
        {
            dequeue();
        }
        else if (ch == 3)
        {
            display();
        }
        else if (ch == 4)
        {
            printf("exiting");
            break;
        }
        else
        {
            printf("invalid input");
        }
    }
    return 0;
}