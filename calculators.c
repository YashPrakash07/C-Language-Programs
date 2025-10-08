#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    // Ask the user to enter an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to consume whitespace

    // Ask the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Use a switch statement to perform the correct operation
    switch (operator) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            // Check if the divisor is zero
            if (num2 != 0.0) {
                printf("%.1lf / %.1lf = %.1lf\n", num1, num2, num1 / num2);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        // If the operator doesn't match any case
        default:
            printf("Error! Operator is not correct.\n");
    }

    return 0;
}
