#include<stdio.h>

void rec_func(int a){
    
    a++;
    printf("%d\n",a);
    rec_func(a);
}

int main()
{
    int a = 1;

   rec_func(a);

    return 0;
}
