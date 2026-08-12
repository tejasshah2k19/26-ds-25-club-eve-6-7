#include<stdio.h>


void add(){
    int a = 10;
    int b = 20;
    int *p = &a;
    int *q = &b; 


    int c = *p + *q ;
    
    printf(" %d ",c); 

}

int main(){

    int a; 
    int *p; //address
    char *c;//address 

    printf(" %d %d %d %d",sizeof(a),sizeof(int),sizeof(c),sizeof(p));//4  4  8  8  

    add();
    
    return 0;
}