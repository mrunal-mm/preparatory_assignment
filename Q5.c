#include <stdio.h>
#include <string.h>

int main(){
    char string[100];
    int uppercase = 0, lowercase = 0, digits = 0, others = 0;

    printf("Enter the string: ");
    fgets(string, sizeof(string), stdin);

    for (int i=0; i<strlen(string); i++){
        // by comparing ASCII values
        if (string[i] >= 48 && string[i] <=57) digits++;
        else if (string[i] >= 65 && string[i] <=90) uppercase++;
        else if (string[i] >= 97 && string[i] <=122) lowercase++;
        else others++;
    }

    printf("Number of digits: %d.\n", digits);
    printf("Number of uppercase letters: %d.\n", uppercase);
    printf("Number of lowercase letters: %d.\n", lowercase);
    printf("Number of other characters: %d.\n", --others); // excluding null character '/0'

    return 0;
}