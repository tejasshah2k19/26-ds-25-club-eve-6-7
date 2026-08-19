#include <stdlib.h>
#include <stdio.h>

int main()
{

    char *name;
    int *maths;
    int *sci;
    int *eng;
    float *perc;
    char *grade;

    name = (char *)malloc(sizeof(char) * 30); // 1 byte
    maths = (int *)malloc(sizeof(int));
    sci = (int *)malloc(sizeof(int));
    eng = (int *)malloc(sizeof(int));
    perc = (float *)malloc(sizeof(float));
    grade = (char *)malloc(sizeof(char));

    printf("enter name and marks of three subjects ");
    scanf("%s%d%d%d",name,maths,sci,eng);

    *perc = (*maths + *sci + *eng  ) / 3.0 ; 

    if( *perc > 35 ){
        *grade = 'P';
    }else{
        *grade = 'F'; 
    }

    printf("\nName = %s Maths = %d Sci = %d eng = %d perc = %f grade = %c ",name,*maths,*sci,*eng,*perc,*grade);


    return 0;
}