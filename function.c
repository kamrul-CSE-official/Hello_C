#include <stdio.h>


int sum (int num1, int num2) {
   return num1 + num2;
};

int runner() {
    int count = 0;
    count++;
    return count;
}

int main (){

    printf("The sum value is: %d \n",sum(10,20));

    printf("Count : %d\n", runner());
    printf("Count : %d\n", runner());

    char name[50] = "MD.Kamrul Hasan";
    printf("Name: %s", name);

    return 0;
};