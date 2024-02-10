#include<stdio.h>

int multiply(int a,int b){
    int product;

    product = a*b;

    return product;
}

int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 7;
    
    int ans = multiply(a,b);

    printf("%d\n",ans);
    return 0;
}
