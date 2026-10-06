#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int item)
{
    if (top == SIZE - 1)
    {
        printf("\nStack Overflow ");
    }
    else
    {
        top++;
        stack[top] = item;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("\nStack is Empty");
    }
    else
    {
        printf("\n%d Removed...", stack[top]);
        top--;
    }
}
void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("\n%d", stack[i]);
    }
}

void peep(int location){
    int index = top - location + 1 ; 
    printf("\n %d ",stack[index]);
}

int main()
{

    push(10);
    push(20);
    push(30);
    display();
    push(40);
    push(50);
    push(60);
    display();
    pop();
    pop();
    display();

    peep(1);
    return 0;
}