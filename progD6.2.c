#include <stdio.h>

int main() {
    int rainfall[7];
    int i, min;
    printf("Enter rainfall data for 7 days:\n");
    for(i = 0; i < 7; i++) {
        scanf("%d", &rainfall[i]);
    }
    min = rainfall[0];
    for(i = 1; i < 7; i++) {
        if(rainfall[i] < min) {
            min = rainfall[i];
        }
    }
    printf("The least rainfall is: %d\n", min);

    return 0;
}