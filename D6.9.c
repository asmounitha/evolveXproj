#include <stdio.h>

int main() {
    int products[10];
    int i, id, count = 0;

    printf("Enter 10 product IDs:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &products[i]);
    }

    printf("Enter the product ID to check frequency: ");
    scanf("%d", &id);

    for(i = 0; i < 10; i++) {
        if(products[i] == id) {
            count++;
        }
    }

    printf("Product ID %d appears %d times.\n", id, count);

    return 0;
}