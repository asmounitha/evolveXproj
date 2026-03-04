#include <stdio.h>

int main() {
    int N, steps, i;
    printf("Enter the number of days: ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        printf("Enter steps for Day %d: ", i);
        scanf("%d", &steps);
        printf("Day %d: %d steps\n", i, steps);
    }

    return 0;
}