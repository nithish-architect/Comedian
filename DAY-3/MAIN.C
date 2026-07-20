#include <stdio.h>
#include <string.h>

int main() {
    // Variable declarations
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    // Prompt for item name
    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);

    // Remove the newline character from the item string
    item[strcspn(item, "\n")] = '\0'; // or: item[strlen(item) - 1] = '\0';

    // Prompt for price
    printf("What is the price for each?: ");
    scanf("%f", &price);

    // Prompt for quantity
    printf("How many would you like?: ");
    scanf("%d", &quantity);

    // Calculate total
    total = price * quantity;

    // Output results
    printf("\nYou have bought %d %s(s)\n", quantity, item);
    printf("The total is %c%.2f\n", currency, total);

    return 0;
}