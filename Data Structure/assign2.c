#include <stdio.h>
#include <malloc.h>
// #include <conio.h>

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
    int count;
    
    printf("No_of_goods:");
    scanf("%d", &count);
    struct Items  itm[];

    for (int a=0; a<count; a++)
    {
        int choice;
        printf("select item type; \n");
        printf("1.Bags: \n");
        printf("2.Clothes: \n");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("You've Selected The Food Option \n");
            printf("Item code:");
            scanf("%s", &itm[a].code);
            printf("Item name:");
            scanf("%s",&itm[a].name);
            printf("Item price:");
            scanf("%lf",&itm[a].price);
            printf("Item amount:");
            scanf("%d",&itm[a].amount);
            printf("Bag color:");
            scanf("%s",&itm[a].goods.bag[0].color);
            break;
        case 2:
            printf("You've Selected The Cloths Option \n");
            printf("Item code:");
            scanf("%s", &itm[a].code);
            printf("Item name:");
            scanf("%s",&itm[a].name);
            printf("Item price:");
            scanf("%lf",&itm[a].price);
            printf("Item amount:");
            scanf("%d",&itm[a].amount);
            printf("Cloth Type:");
            scanf("%s",&itm[a].goods.clothes[0].type);
            printf("Cloth_manufacturer:");
            scanf("%s",&itm[a].goods.clothes[0].manufacturer);
            printf("Cloth_size:");
            scanf("%d",&itm[a].goods.clothes[0].size);
            break;
        
        default:
            printf("Only two choices available");
        
            a--;
            break;
        }
        

    } 

}