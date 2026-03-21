#include <stdio.h>
#include <string.h>

int main() {
    char message[100];
    int i, j;
    char temp;

    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

    int len = strlen(message);

    if(message[len-1] == '\n') {
        message[len-1] = '\0';
        len--;
    }

    for(i = 0, j = len - 1; i < j; i++, j--) {
        temp = message[i];
        message[i] = message[j];
        message[j] = temp;
    }

    printf("Reversed message: %s\n", message);

    return 0;
}