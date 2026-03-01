#include <stdio.h>

int main() {
    int age;
    float price, finalPrice;
    printf("Enter the ticket price: ");
    scanf("%f", &price);
    printf("Enter the customer's age: ");
    scanf("%d", &age);
    if (age < 12) {
        finalPrice = price * 0.5;
    } else if (age > 60) {
        finalPrice = price * 0.7;
    } else {
        finalPrice = price;
    }
    printf("The final ticket price is: %.2f\n", finalPrice);
    return 0;


