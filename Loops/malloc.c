#include<stdio.h>
#include<malloc.h>
//#include<stdlib.h>



int main()
{
    char ephraim[50];
    scanf("%[^\n]s", ephraim);
    char *es = (char*) malloc(sizeof(ephraim));
    es = ephraim;
    printf("%s\n", es);
    return 0;
}