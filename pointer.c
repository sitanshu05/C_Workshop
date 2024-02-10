#include<stdio.h>
int global = 10;

int main()
{
    int a = global;

    int *ptr; 

    ptr = &a;

    printf("%p\n",ptr);
    printf("%d\n",a);
    printf("%d\n",*ptr);
    return 0;
}
