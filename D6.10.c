#include <stdio.h>

int main() {
    int heights[8];
    int i, sortedAsc = 1, sortedDesc = 1;

    printf("Enter heights of 8 players:\n");
    for(i = 0; i < 8; i++) {
        scanf("%d", &heights[i]);
    }

    for(i = 0; i < 7; i++) {
        if(heights[i] > heights[i+1]) {
            sortedAsc = 0;
        }
        if(heights[i] < heights[i+1]) {
            sortedDesc = 0;
        }
    }

    if(sortedAsc)
        printf("The array is sorted in ascending order.\n");
    else if(sortedDesc)
        printf("The array is sorted in descending order.\n");
    else
        printf("The array is not sorted.\n");

    return 0;
}