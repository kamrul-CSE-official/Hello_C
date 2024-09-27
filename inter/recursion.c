// actorial of a Number Using Recursion

#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case: 0! = 1 and 1! = 1
    }
    return n * factorial(n - 1);  // Recursive case
}

int main() {
    int num;
    
    printf("Enter a number: ");
    num = 10;

    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}
