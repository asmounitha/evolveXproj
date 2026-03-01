#include <stdio.h>

int main() {
    int Number;

    printf("Enter a menu number (1-5): ");
    scanf("%d", &Number);

    switch (Number) {
        case 1:
            printf(" it is a Pizza:))\n");
            break;
        case 2:
            printf(" Burgerss!yaya.\n");
            break;
        case 3:
            printf("it is Pasta yaya.\n");
            break;
        case 4:
            printf("it is a Salad:(\n");
            break;
            case 5:
            printf("it is a Sandwich!!.\n");
        default:
            printf("Error: Invalid menu number.\n");
    }

    return 0;
}