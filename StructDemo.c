// #include <stdio.h>

// struct student
// {
//     char name[30];
//     int maths;
//     int sci;
//     int eng;
//     float perc;
//     char grade;
// };

// int main()
// {

//     struct student s;
//     struct student p;

//     printf("enter name and marks of three subjects");
//     scanf("%s%d%d%d", &s.name, &s.maths, &s.sci, &s.eng);

//     s.perc = (s.maths + s.sci + s.eng) / 3.0;

//     if (s.perc >= 35)
//     {
//         s.grade = 'P';
//     }
//     else
//     {
//         s.grade = 'F';
//     }

//     printf("\nName = %s\nMaths = %d\nSci = %d\nEng = %d\nPerc = %f\nGrade = %c",s.name,s.maths,s.sci,s.eng,s.perc,s.grade);

//     return 0;
// }

#include <stdio.h>

struct student
{
    char name[30];
    int maths;
    int sci;
    int eng;
    float perc;
    char grade;
};

int main()
{

    struct student s[5]; // struct array
    struct student p;

    for (int i = 0; i < 5; i++)
    {

        printf("enter name and marks of three subjects");
        scanf("%s%d%d%d", &s[i].name, &s[i].maths, &s[i].sci, &s[i].eng);

        s[i].perc = (s[i].maths + s[i].sci + s[i].eng) / 3.0;

        if (s[i].perc >= 35)
        {
            s[i].grade = 'P';
        }
        else
        {
            s[i].grade = 'F';
        }
    }

    printf("\nName\tMaths\tSci\tEng\tPerc\tGrade");
    for(int i=0;i<5;i++){ 
        printf("\n %s\t%d\t%d\t%d\t%f\t%c", s[i].name, s[i].maths, s[i].sci, s[i].eng, s[i].perc, s[i].grade);
    }
    return 0;
}