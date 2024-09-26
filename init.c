#include <stdio.h>

int main() {
    printf("Bismillah.\n");

    // Variable declarations and arithmetic operation
    int a = 0, b = 1, c = 2, d = 3, e = 4;
    a = b - c + d * e;  // Calculate the value of 'a'
    printf("%d\n", a);  // Print the value of 'a'

    // Array declaration and population
    int numbers[10] = {0}; // Initialize all elements to 0

    // Populate the array with values
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    numbers[5] = 60;
    numbers[6] = 70;

    // Print the 7th number from the array, which has an index of 6
    printf("The 7th number in the array is %d\n", numbers[6]);

    // 2D array for vowels
    char vowels[2][5] = {
        {'A', 'E', 'I', 'O', 'U'},
        {'a', 'e', 'i', 'o', 'u'}
    };

    // Print the first vowels
    printf("Uppercase vowel: %c\n", vowels[0][0]); // Prints 'A'
    printf("Lowercase vowel: %c\n", vowels[1][0]); // Prints 'a'

    // Conditional statements
    int foo = 1;
    int bar = 2;

    if (foo < bar) {
        printf("foo is smaller than bar.\n");
    }

    if (foo > bar) {
        printf("foo is greater than bar.\n");
    }

    // Array to calculate sum
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    int i;

    // Calculate the sum of the array
    for (i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        sum += array[i];
    }

    // Print the sum of the array
    printf("Sum of the array is %d\n", sum);
    printf("Size: %d\n", sizeof(array) / sizeof(array[0]));

    // Using a while loop to find even numbers
    int n = 0;
    while (n < 10) {
        n++;

        // Check if n is odd
        if (n % 2 == 1) {
            // Go back to the start of the while block
            continue;
        }

        // This code is reached only if n is even
        printf("The number %d is even.\n", n);
    }

    return 0;
}
