#include<stdio.h>

void increment(int a){
    a = a + 1;
}

int main()
{
    int a=10; 

    increment(a);

    printf("%d\n",a);
    return 0;
}
