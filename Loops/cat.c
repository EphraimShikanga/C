#include<stdio.h>

void take_ptr(int *y);

int main(){

    int dig=2;
    int num = 10;
    int *p=&dig;
    int *ptr = &num;

    take_ptr(p);
    take_ptr(ptr);

    printf("%d\n",dig);
    printf("%d",num);

    return 0;
}

void take_ptr(int *y)
{
    *y = 16;  
}