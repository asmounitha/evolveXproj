#include <stdio.h>

int main() {
    int marks;

    printf("Enter the student's marks (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid input\n");
    } else if (marks >= 35) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}