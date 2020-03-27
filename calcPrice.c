
#include <stdio.h>

int main(void)
{
    int item, quantity;
    double price, total;
    char date[8];

    printf("Enter item number: ");
    scanf("%d", &item);
    printf("Enter unit price: ");
    scanf("%lf", &price);
    printf("Enter quanity: ");
    scanf("%d", &quantity);
    printf("Enter purchase date: ");
    scanf("%s", date);

    total = quantity * price;

    printf("Item\t Unit Price\t QTY\t Purchase Date\t Total\n");
    printf("%d\t $ %.2f\t %d\t %s\t $ %.2f\n", item, price, quantity, date, total);

    return 0;
}

