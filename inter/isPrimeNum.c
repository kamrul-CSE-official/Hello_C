#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;  // Numbers less than or equal to 1 are not prime.

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;  // Not a prime number if divisible by i.
    }
    return 1;  // Prime number
}

int main() {
    
    printf("Enter a number: ");
    int number = 10;

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
