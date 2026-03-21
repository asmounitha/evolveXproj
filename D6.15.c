#include <stdio.h>
#include <string.h>

int main() {
    char word[50];
    int i, j, isPalindrome = 1;

    printf("Enter a word: ");
    fgets(word, sizeof(word), stdin);

    int len = strlen(word);

    if(word[len-1] == '\n') {
        word[len-1] = '\0';
        len--;
    }

    for(i = 0, j = len - 1; i < j; i++, j--) {
        if(word[i] != word[j]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}