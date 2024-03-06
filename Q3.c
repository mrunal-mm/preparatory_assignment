#include <stdio.h>

void fibonacciSeries(int n);

int main() {
    int n;

    printf("Enter the number of Fibonacci series elements to generate: ");
    scanf("%d", &n);

    if (n < 0) printf("Enter a non-negative number.\n");
    
    else fibonacciSeries(n);

    return 0;
}

void fibonacciSeries(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d numbers:\n", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1) 
            next = i;

        else {
            next = first + second;
            first = second;
            second = next;
        }

        printf("%d ", next);
    }

    printf("\n");
}