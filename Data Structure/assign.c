#include <stdio.h>
#include <malloc.h>
#include <conio.h>

struct Items
{
    char *code;
    char *name;
    int amount;
    double price;

    union goods
    {
        struct bag{
            char *color;
        }bag[10];

        struct clothes
        {
            char *type, *manufacturer;
            int size;
        }clothes[10];
    }goods;
}Items;

void main()
{
    struct Items itm1;
    itm1.code = "bg21";
    itm1.name = "Laptop bag";
    itm1.amount = 2;
    itm1.price = 1500;
    itm1.goods.bag[0].color = "black";

    struct Items itm2;
    itm2.code="clt21";
    itm2.name="trouser";
    itm2.amount=3;
    itm2.price=800;
    itm2.goods.clothes[0].type="jeans";
    itm2.goods.clothes[0].manufacturer="gucci";
    itm2.goods.clothes[0].size=38;

    struct Items *pt = &itm1;
    struct Items *pt2 = &itm2;

    printf("Code is %s\nName is %s\n ", pt->code, pt->name );
    printf("Code is %s\nName is %s ",pt2->code, pt2->name );

}

struct Items *ptrrtn(char *code, char *name, int amount, double price)
{
    struct Items *w = (struct Items*) malloc(sizeof(struct Items));
}