#include <stdio.h>
#define SIZE 5

int arr[SIZE];

void insert(int location, int data)
{
    for (int i = SIZE - 1; i >= location; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[location-1]= data; 
}

void display()
{
    for(int i=0;i<SIZE;i++){
        printf(" %d ",arr[i]);
    }
}
int main()
{
    insert(1, 10); 
    insert(2, 20);
    insert(3, 30);
    insert(1, 40);
    insert(3, 55);
    //linear search -> 
    insert(2, 40);//40 already present 

    

    display(); // 40	10	55	20	30

    return 0;
}