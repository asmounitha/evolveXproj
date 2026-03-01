#include <stdio.h>

int main() {
    float temperature;

    printf("Enter the room temperature in degrees Celsius: ");
    scanf("%f", &temperature);

    if (temperature < 18) {
        printf("Too cold\n");
    } else if (temperature > 30) {
        printf("Too hot\n");
    } else {
        printf("Comfortable\n");
    }

    return 0;
}