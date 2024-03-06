#include <stdio.h>

int main() {
    char inputString[100];
    int count[26] = {0};

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    for (int i = 0; inputString[i] != '\0'; i++) {
        // make characters to lowercase
        char currentChar = tolower(inputString[i]);
        if (currentChar >= 'a' && currentChar <= 'z') {
            count[currentChar - 'a']++;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        printf("%c: %d\n", 'a' + i, count[i]);
    }

    return 0;
}
