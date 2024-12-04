#include <stdio.h>

int main() {
    // Print name and ID
    printf("Name: Your Name\n");
    printf("ID: Your ID\n");

    // Take two input numbers
    int num1, num2, sum;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate summation
    sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0;
}

