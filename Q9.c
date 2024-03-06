#include <stdio.h>

void convertToBinaryAndOctal(int num) {
    
    printf("Binary representation: ");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }

    printf("\nOctal representation: %o\n", num);
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    convertToBinaryAndOctal(number);

    return 0;
}
