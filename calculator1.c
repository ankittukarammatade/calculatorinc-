#include <stdio.h>
int main() {
    char op1, op2;
    int number1, number2, number3;
    int answer = 0;
    printf("Enter Mathematical Equation  ");
    if (scanf("%d %c %d %c %d", &number1, &op1, &number2, &op2, &number3) != 5) {
        printf("Error: Invalid input.");
    }
    if ((op1 == '/' && number2 == 0) || (op2 == '/' && number3 == 0)) {
        printf("Error: Division by zero.");
    }
    if (op1 == '+' && op2 == '+') {
        answer = number1 + number2 + number3;
    } else if (op1 == '-' && op2 == '-') {
        answer = number1 - number2 - number3;
    } else if (op1 == '+' && op2 == '-') {
        answer = number1 + number2 - number3;
    } else if (op1 == '-' && op2 == '+') {
        answer = number1 - number2 + number3;
    } else if (op1 == '*' && op2 == '-') {
        answer = (number1 * number2) - number3;
    } else if (op1 == '*' && op2 == '+') {
        answer = (number1 * number2) + number3;
    } else if (op1 == '+' && op2 == '*') {
        answer = number1 + (number2 * number3);
    } else if (op1 == '-' && op2 == '*') {
        answer = number1 - (number2 * number3);
    } else if (op1 == '/' && op2 == '/') {
        answer = (number1 / number2) / number3;
    } else if (op1 == '/' && op2 == '*') {
        answer = (number1 / number2) * number3;
    } else if (op1 == '/' && op2 == '+') {
        answer = (number1 / number2) + number3;
    } else if (op1 == '/' && op2 == '-') {
        answer = (number1 / number2) - number3;
    } else if (op1 == '+' && op2 == '/') {
        answer = number1 + (number2 / number3);
    } else if (op1 == '-' && op2 == '/') {
        answer = number1 - (number2 / number3);
    } else if (op1 == '*' && op2 == '/') {
        answer = number1 * (number2 / number3);
    } else {
        printf("Error: Invalid expression.\n");
    }
    printf("%d", answer);
}
