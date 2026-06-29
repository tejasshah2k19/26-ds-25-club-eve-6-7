#include <stdio.h>
#define SIZE 7

int arr[SIZE];

int linearSearch(int item)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == item)
        {
            return 1; // found true
        }
    }
    return 0; // false not found
}

void insertItem(int location, int data)
{
    //
    if (linearSearch(data) == 1)
    {
        printf("\n%d is already present ", data);
    }
    else
    {
        for (int i = SIZE - 1; i >= location; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[location - 1] = data;
    }
}

void display()
{
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %d", arr[i]);
    }
}

void removeItem(int location)
{
    //
    for (int i = location - 1; i < SIZE - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[SIZE - 1] = 0;
}

int main()
{

    insertItem(1, 10);
    insertItem(2, 20);
    insertItem(1, 30);
    insertItem(1, 40);
    insertItem(2, 50);
    insertItem(3, 60);

    display(); // 40	50	60	30	10	20

    return 0;
}