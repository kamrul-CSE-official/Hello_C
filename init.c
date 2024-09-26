#include <stdio.h>

int main () {
    printf("Bismillah. \n");
    int a = 0, b = 1, c = 2, d = 3, e = 4;
    a = b - c + d * e;
    printf("%d \n", a);

    int numbers[10];

/* populate the array */
numbers[0] = 10;
numbers[1] = 20;
numbers[2] = 30;
numbers[3] = 40;
numbers[4] = 50;
numbers[5] = 60;
numbers[6] = 70;

/* print the 7th number from the array, which has an index of 6 */
printf("The 7th number in the array is %d \n", numbers[6]);

char vowels[2][5] = {
    {'A', 'E', 'I', 'O', 'U'},
    {'a', 'e', 'i', 'o', 'u'}
};

printf("%c \n",vowels);


int foo = 1;
int bar = 2;

if (foo < bar) {
    printf("foo is smaller than bar.");
}

if (foo > bar) {
    printf("foo is greater than bar.");
}

int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int sum = 0;
int i;

for (i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
    sum += array[i];
}

/* sum now contains a[0] + a[1] + ... + a[9] */
printf("Sum of the array is %d\n", sum);

printf("Size: %d \n",sizeof(array)/sizeof(array[0]));



int n = 0;
while (n < 10) {
    n++;

    /* check that n is odd */
    if (n % 2 == 1) {
        /* go back to the start of the while block */
        continue;
    }

    /* we reach this code only if n is even */
    printf("The number %d is even.\n", n);
}


   return 0;
}


