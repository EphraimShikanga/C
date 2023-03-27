#include<stdio.h>
#include<malloc.h>

typedef struct{
    int item_no;
    char *item_name;
    int qty;
    double price; 

}objects;

objects *get_item(int w, char *x, int y, double z);
int main()
{
    int no;
    char name[25];
    int qty;
    double price; 
    printf("Input Item code");
    scanf("%d",&no);
    printf("Input Item name");
    scanf("%s", name);
    printf("Input quantity");
    scanf("%d", &qty);
    printf("Input price");
    scanf("%f", &price);

    objects *pass;
    objects *print;


    pass = get_item(1, "Bag", 3, 3500);
    printf("%d %s\n %d\n %f\n", pass->item_no, pass->item_name, pass->qty, pass->price );
    FILE *all_items;
    all_items = fopen("item.bin", "wb");
    fwrite(pass, sizeof(objects), 1, all_items);
    fclose(all_items);

    FILE *all_items_text;
    all_items_text = fopen("all_items.txt", "a");
    fprintf(all_items_text,"%d %s\n %d\n %lf\n\n",pass->item_no, pass->item_name, pass->qty, pass->price);
    fclose(all_items_text);

    FILE *all_items_read;
    all_items_read = fopen("item.bin", "rb");
    fread(print, sizeof(objects), 1, all_items_read);
    fclose(all_items_read);
    printf("%d %s\n %d\n %lf\n", print->item_no, print->item_name, print->qty, print->price);
    return 0;
}

objects *get_item(int w, char *x, int y, double z)
{
    objects *o = (objects*)malloc(sizeof(objects));
    o-> item_no = w;
    o-> item_name = x;
    o-> qty = y;
    o-> price = z;
    return o;
}