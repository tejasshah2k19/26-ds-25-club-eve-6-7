#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int queue[SIZE];

int front = -1;
int rear = -1;

void enQueue(int data)
{
    if (rear == SIZE - 1)
    {
        printf("\nQueue Full for %d", data);
    }
    else
    {

        rear++;
        queue[rear] = data;

        // first time
        if (front == -1)
        {
            front = 0;
        }
    }
}

void deQueue()
{
    if (front == -1)
    {
        printf("\nQueue is Empty ");
    }
    else if (front == rear)
    {
        printf("\n%d removed", queue[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("\n%d removed", queue[front]);
        front++;
    }
}

void display()
{

    if (front == -1)
    {
        printf("\nQueue is Empty ");
    }
    else
    {
        printf("\nQueue data : ");
        for (int i = front; i <= rear; i++)
        {
            printf(" %d ", queue[i]);
        }
    }
}

int main()
{

    int choice;
    int data;

    while (1)
    {
        printf("\n0 for Exit\n1 For enQueue\n2 For deQueue\n3 For Display\nEnter choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data");
            scanf("%d", &data);
            enQueue(data);
            break;
        case 2:
            deQueue();
            break;
        case 3:
            display();
            break;
        case 0:
            exit(0);
        default:
            printf("\nInvalid Choice");
            break;
        }
    }

    return 0;
}