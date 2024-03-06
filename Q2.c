#include <stdio.h>
#include <stdlib.h>

int factorial(int num);

int main(){
    int num, fact;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num < 0) printf("Enter a non-negative number.");
    
    else printf("Factorial of %d is %d.", num, factorial(num));

    return 0;
}

int factorial(int num){
    if (num == 0 || num == 1)
        return 1;
    
    int result = 1;
    for (int i=2; i<=num; i++){
        result *= i;
    }
    return result;
}