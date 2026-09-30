#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *last = NULL;
// insertion at the end
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

void display()
{
    struct node *p = head;
    printf("\nLinkedList : ");
    while (p != NULL)
    {
        printf(" %d ", p->data);
        p = p->next;
    }
}

// 10   20 30 40
// head
void addNodeBeg(int data)
{
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = data;
    tmp->next = head;
    head = tmp;
}

void search(int key)
{

    struct node *p = head;
    int found = 0; // not found

    while (p != NULL)
    {
        if (p->data == key)
        {
            found = 1;
            break; 
        }
        p = p->next;
    }

    if(found == 1){
        printf("\n%d found",key);
    }else{
        printf("\n%d not found",key);
    }

}
int main()
{

    addNode(10);
    // printf(" %d ", head->data);
    addNode(20);
    // printf(" %d ", head->next->data);
    addNode(30);
    // printf(" %d ", head->next->next->data);
    addNode(40);
    // printf(" %d ", head->next->next->next->data);

    // 10->20->30->40->
    // head        last

    display();

    addNodeBeg(100); // 100 10 20 30 40

    display();

    search(50); // not found
    search(30); // found

    return 0;
}