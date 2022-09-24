#include <stdio.h>
union party_items
{
    char name[20];
    int price;
    int quantity;
} item[50];
// to input details of new item
void read_item(union party_items *item)
{
    printf("\nEnter details:- \n");
    printf(" Name: ");
    scanf("%s", &(item->name));
    printf(" Price: ");
    scanf("%d", &(item->price));
    printf(" Enter quantity: ");
    scanf("%d", &(item->quantity));
    printf("\n Price: %d \t Quantity: %d\n\n", (item->price), (item->quantity));
}
int main()
{
    printf("\n\n\n");
    int count;
    printf("Enter the no. of items (<=50): ");
    scanf("%d", &count);
    for (int i = 0; i < count; ++i)
        read_item(&item[i]);
    float total = 0;
    for (int i = 0; i < count; ++i)
        total += item[i].price * item[i].quantity; // to calculate total amount
    printf("\n\n The total amount to be paid is: %f", total);
    printf("\n\n\n");
    return 0;
}