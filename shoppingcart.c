#include <stdio.h>
#include <string.h>

int main() {
    char item[50];
    float price;
    int quantity = 0;
    char currency = '$';
    float total;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    if (item[strlen(item) - 1] == '\n') {
        item[strlen(item) - 1] = '\0';
    }

    printf("What is the price for each?: ");
    scanf("%f", &price);

    printf("How many would you want to buy: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have bought: %d %s\n", quantity, item);
    printf("The total is: %c%.2f\n", currency, total);

    return 0;
}

