#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
struct node *last = NULL;

//[ NULL | 10 | NULL ]  ->         <-   [  &10 | 20 | NULL ]
//   head                                   newNode
//                                          last

void addNode(int value)
{
    if (head == NULL)
    {
        head = (struct node *)malloc(sizeof(struct node));
        head->data = value;
        head->next = NULL;
        head->prev = NULL;
        last = head;
    }
    else
    {
        //
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = value;
        newNode->next = NULL;
        newNode->prev = last;
        last->next = newNode;
        last = newNode;
    }
}

// display
// 10 20 30 40 50  NULL
//                 p
void display()
{
    //
    struct node *p = head;
    while (p != NULL)
    {
        printf(" %d ", p->data); // 10 20
        p = p->next;
    }
}

void countOddNode()
{
    // 2 odd node
    int count =0;
    struct node *p = head;
    while (p != NULL)
    {
       if(p->data % 2 != 0 ){
        count++;
       }
        p = p->next;
    }

    printf("\nTotal Odd Node = %d",count);
}
int main()
{

    addNode(10);
    addNode(20); //
    addNode(33);
    addNode(40);
    addNode(55);
    display();      // 10 20 30 40 50
    countOddNode(); // odd => 2

    return 0;
}