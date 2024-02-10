#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct marks
{
    int maths,english,science;
    float avg;
}marks;

typedef struct student
{
    char name[30];
    int roll;
    struct marks marks;
}student;

void print_marks(marks m){
    printf("Marks of the Student:\n"); 
    printf("\tMaths: %d\n",m.maths);
    printf("\tEnglish: %d\n",m.english);
    printf("\tScience: %d\n",m.science);
    printf("\tAverage Marks: %.2f\n",m.avg);
}

void print_student(student s){
    printf("Name: %s\n",s.name);
    printf("Roll No.:%d\n",s.roll);
    print_marks(s.marks);
}
void marks_avg(student *s){
    float avg= (float)(s->marks.maths+s->marks.english+s->marks.science)/3;

    s->marks.avg = avg;
}
int main()
{

    //object
    struct student s1;

    strcpy(s1.name,"situ");
    s1.roll=25;
    s1.marks.maths = 89;
    s1.marks.english = 76;
    s1.marks.science = 94;
    marks_avg(&s1);
    print_student(s1);

    //pointer


    student *s2 = (student*)malloc(sizeof(student));
    strcpy(s2->name,"tanvi");
    s2->roll=26;
    s2->marks.maths = 90;
    s2->marks.english = 80;
    s2->marks.science = 85;
    marks_avg(s2);
    print_student(*s2);




    return 0;
}


