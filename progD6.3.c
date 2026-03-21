#include <stdio.h>

int main() {
    int scores[10];
    int i, sum = 0;
    printf("Enter the scores for 10 matches:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &scores[i]);
    }
    for(i = 0; i < 10; i++) {
        sum += scores[i];
    }
    printf("The total runs scored by the player: %d\n", sum);

    return 0;
}