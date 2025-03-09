#include <stdio.h>

int main() {
    int number, num1, num2, num3, sum;

    // Part 1: Check if a number is even or odd
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    // Part 2: Add three numbers
    printf("Enter three numbers to add: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    printf("The sum of the three numbers is: %d\n", sum);

    return 0;
}
