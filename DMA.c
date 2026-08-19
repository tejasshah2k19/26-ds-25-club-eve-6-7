#include<stdio.h>
#include<stdlib.h>


int main(){

    int x; //4 byte -- implicit 
    int *p;
    
    p = (int*)malloc(sizeof(int)); //GCC:4 TC:2 

    printf("enter number");
    scanf("%d",p);

    printf("\nnum = %d",*p); //value at

    free(p); 


    return 0;
}