#include <stdio.h>
#define SIZE 5
int stack[SIZE];
int top = -1;

void PUSH(int data)
{
}

void POP()
{
}

void display()
{
}

int main()
{

    PUSH(10);
    PUSH(20);
    PUSH(30);

    display(); // 30 20 10

    POP(); // 30

    display(); // 20 10

    return 0;
}