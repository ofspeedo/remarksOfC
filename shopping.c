#include <stdio.h>
#include <stdlib.h>


struct item
{
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct item *anana)
{
    printf("\nenter your product name:");
    scanf("%s", anana->itemName);

    printf("\nenter your quantity:");
    scanf("%i", &anana->quantity);

    printf("\nenter your price:");
    scanf("%f", &anana->price);

    anana->amount = (float)anana->price * anana->quantity;
}

void printItem(struct item *anana)
{
    printf("\nyour item is %s", anana->itemName);
    printf("\nyour item quantity is %d", anana->quantity);
    printf("\nyour item cost is %.2f", anana->price);
    printf("\nyour item total amount is %.2f", anana->amount);
}

int main()
{
    struct item apple, *banana;

    banana = &apple;

    banana->itemName = (char *) malloc(30 * sizeof(char));

    if(banana == NULL)
        exit(-1);

    readItem(banana);
    printItem(banana);

    free(banana->itemName);

    return 0;
}
