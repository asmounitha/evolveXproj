#include <stdio.h>
#include <string.h>

int main() {
    char username[100];
    char cleaned[100];
    int i, j = 0;

    printf("Enter the username: ");
    fgets(username, sizeof(username), stdin);

    int len = strlen(username);

    if(username[len-1] == '\n') {
        username[len-1] = '\0';
        len--;
    }

    for(i = 0; i < len; i++) {
        if(username[i] != ' ') {
            cleaned[j++] = username[i];
        }
    }
    cleaned[j] = '\0';

    printf("Cleaned username: %s\n", cleaned);

    return 0;
}