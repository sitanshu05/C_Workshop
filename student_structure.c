#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    char name[30];
    int dsa_marks;
};

int main()
{
    struct student s1; 

    strcpy(s1.name,"name");
    s1.roll=12;
    s1.dsa_marks = 69;

    printf("%s\n",s1.name);
    
    return 0;
}
