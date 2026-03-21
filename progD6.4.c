#include <stdio.h>

int main() {
    int ratings[5];
    int i, sum = 0;
    float average;
    printf("Enter 5 customer ratings:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &ratings[i]);
    }
    for(i = 0; i < 5; i++) {
        sum += ratings[i];
    }
    average = (float)sum / 5;
    printf("The average customer rating is: %.2f\n", average);

    return 0;
}