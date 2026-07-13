#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1; // EMPTY

void PUSH(int num)
{
    top++;
    stack[top] = num;
}

void POP()
{
    printf("\n %d POP", stack[top]);
    top--;
}

void display()
{
    printf("\nSTACK :");
    for (int i = top; i >= 0; i--)
    {
        printf("\n%d", stack[i]);
    }
}

int main()
{

    PUSH(10);
    PUSH(20);
    PUSH(30);

    display(); // 30 20 10

    PUSH(40);

    POP();
    POP();

    display(); // 20 10

    return 0;
}