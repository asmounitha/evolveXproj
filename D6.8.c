#include <stdio.h>

int main() {
    int attendance[7];
    int backup[7];
    int i;

    printf("Enter attendance data for 7 days:\n");
    for(i = 0; i < 7; i++) {
        scanf("%d", &attendance[i]);
    }

    for(i = 0; i < 7; i++) {
        backup[i] = attendance[i];
    }

    printf("Backup attendance data:\n");
    for(i = 0; i < 7; i++) {
        printf("%d ", backup[i]);
    }

    return 0;
}