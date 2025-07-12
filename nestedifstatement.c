#include <stdio.h>
#include <stdbool.h>

int main() {
    float price = 10.00;
    bool isstudent = false;
    bool issenior = true;

    if (isstudent) {
        printf("You get a student discount of 10%%\n");
        price *= 0.9;

        if (issenior) {
            printf("You also get a senior discount of 20%%\n");
            price *= 0.8;
        }
    } else {
        if (issenior) {
            printf("You get a senior discount of 20%%\n");
            price *= 0.8;
        }
    }

    printf("The price of the ticket is: $%.2f\n", price);
    return 0;
}

