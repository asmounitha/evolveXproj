#include <stdio.h>

int main() {
    int sales[8];
    int i, evenCount = 0, oddCount = 0;

    printf("Enter 8 sales values:\n");
    for(i = 0; i < 8; i++) {
        scanf("%d", &sales[i]);
    }

    for(i = 0; i < 8; i++) {
        if(sales[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Count of even values: %d\n", evenCount);
    printf("Count of odd values: %d\n", oddCount);

    return 0;
}