// Q1- write a program to input cost price and selling price and check whether there is a profit, loss or nothing.

#include <stdio.h>

int main() {
    float costPrice, sellingPrice;

    // Input cost price and selling price
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    // Check profit, loss or nothing
    if (sellingPrice > costPrice) {
        printf("Profit of %.2f\n", sellingPrice - costPrice);
    }
    else if (costPrice > sellingPrice) {
        printf("Loss of %.2f\n", costPrice - sellingPrice);
    }
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}





