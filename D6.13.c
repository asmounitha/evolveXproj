#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char title[100];
    int i;

    printf("Enter the book title: ");
    fgets(title, sizeof(title), stdin);

    for(i = 0; i < strlen(title); i++) {
        title[i] = toupper(title[i]);
    }

    printf("Book title in uppercase: %s\n", title);

    return 0;
}