#include <stdio.h>

int factorial(int);

int main () {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int fact = factorial(num);

    printf("Factorial of %d is %d.", num, fact);

    return 0;
}

int factorial(int num) {
    int factorial = 1;

    for (int i = num; i >= 2; i--) {
        factorial *= i;
    }

    return factorial;
}