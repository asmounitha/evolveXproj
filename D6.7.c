#include <stdio.h>

int main() {
    int temp[7];
    int i, j, tempVal;

    printf("Enter 7 temperature readings:\n");
    for(i = 0; i < 7; i++) {
        scanf("%d", &temp[i]);
    }

    for(i = 0, j = 6; i < j; i++, j--) {
        tempVal = temp[i];
        temp[i] = temp[j];
        temp[j] = tempVal;
    }

    printf("Temperatures in reverse order:\n");
    for(i = 0; i < 7; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}