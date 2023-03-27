#include<stdio.h>

char *rtp();

int main()
{

    char *p = rtp();

    for(int i = 0; i<15; i++)
    {
        printf("%c\n",*(p+i));
    }
   
   return 0;
}


char *rtp()
{
    static char x[] = {"programmingcat"};
    char *ptr = x;
    return ptr;
}