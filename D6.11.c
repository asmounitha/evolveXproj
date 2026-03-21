#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[50];
    int i, count = 0;

    printf("Enter the student name: ");
    fgets(name, sizeof(name), stdin);

    for(i = 0; i < strlen(name); i++) {
        char ch = tolower(name[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    printf("Number of vowels in the name: %d\n", count);

    return 0;
}