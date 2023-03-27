#include<stdio.h>


int main()
{
    for(int count=10;count<=11;count++)
    {
        for(int c=21;c>2*count;c++)
        {
            printf("%d ",c);
        }
        printf("\n");
    }
    return 0;
}

