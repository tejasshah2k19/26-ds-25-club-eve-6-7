#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *last = NULL;

void addNode(int num)
{
    if (head == NULL)
    {
        // first insertion
        head = (struct node *)malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        last = head;
    }
    else
    {
        //
        struct node *tmp = (struct node *)malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}

int main()
{

    addNode(10);
    printf(" %d ", head->data);
    addNode(20);
    printf(" %d ", head->next->data);
    addNode(30);
    printf(" %d ", head->next->next->data);
     addNode(40);
    printf(" %d ", head->next->next->next->data);
   
    return 0;
}