// Sum of Digits of a Number
// Problem: Write a C program to find the sum of digits of a given number.

#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main() {
    int num;

    printf("Enter a number: ");
    num = 20;

    printf("Sum of digits: %d\n", sumOfDigits(num));

    return 0;
}
