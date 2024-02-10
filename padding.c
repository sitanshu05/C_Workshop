#include<stdio.h>

struct student
{
    char name;
    int roll;
    float marks;
};

int main()
{
    struct student s1;

    printf("%d\n",sizeof(float));

    printf("%d\n",sizeof(char) + sizeof(int) + sizeof(int));
    printf("%d\n",sizeof(struct student));
    
    return 0;
}
