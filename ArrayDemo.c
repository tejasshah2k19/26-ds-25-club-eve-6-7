#include <stdio.h>
#define SIZE 7

int arr[SIZE];

void insertItem(int location, int data)
{
    //
    for(int i=SIZE-1; i>=location;i--){
        arr[i] = arr[i-1];
    }
    arr[location-1]=data; 
    
}

void removeItem()
{
}

void display()
{
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %d", arr[i]);
    }
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