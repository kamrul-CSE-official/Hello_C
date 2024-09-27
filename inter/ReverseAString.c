#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    char temp;

    while (start < end) {
        // Swap characters
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move the indices
        start++;
        end--;
    }
}


void reverseString2(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    char temp;

    while (start < end) {
        // Swap characters
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move the indices
        start++;
        end--;
    }
}

int main() {
    char str[100] = "Kamrul";
    
    printf("Enter a string: %s ", str);
    

    reverseString(str);
    printf("Reversed string: %s\n", str);
    
    return 0;
}
