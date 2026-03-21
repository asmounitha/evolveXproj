#include <stdio.h>

int main() {
    int seats[10];
    int i, request, found = 0;

    printf("Enter 10 booked seat numbers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &seats[i]);
    }

    printf("Enter the seat number to check: ");
    scanf("%d", &request);

    for(i = 0; i < 10; i++) {
        if(seats[i] == request) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Seat %d is already booked.\n", request);
    else
        printf("Seat %d is available.\n", request);

    return 0;
}