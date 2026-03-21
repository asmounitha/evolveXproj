#include <stdio.h>

int main() {
    int ratings[7];
    int i, max;
    printf("Enter food ratings for 7 days:\n");
    for(i = 0; i < 7; i++) {
        scanf("%d", &ratings[i]);
    }
    max = ratings[0];
    for(i = 1; i < 7; i++) {
        if(ratings[i] > max) {
            max = ratings[i];
        }
    }
    printf("The highest food rating is: %d\n", max);

    return 0;
}



